#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
struct Name {
    char c1;
    char c2;
    char c3;
    bool operator<(const Name &name) const {
        if (c1 < name.c1) return true;
        else if (c1 > name.c1) return false;
        if (c2 < name.c2) return true;
        else if (c2 > name.c2) return false;
        if (c3 < name.c3) return true;
        else if (c3 > name.c3) return false;
        return false;
    }
};
struct PhoneCall {
    struct Name name1;
    struct Name name2;
    int span;
};
void readPhoneCalls(int count, struct PhoneCall *ret) {
    for (int i = 0; i < count; ++i) {
        struct PhoneCall *pPhoneCall = ret + i;
        struct Name *pName1 = &(pPhoneCall->name1);
        struct Name *pName2 = &(pPhoneCall->name2);
        scanf("\n%c%c%c %c%c%c %d",
              &(pName1->c1), &(pName1->c2), &(pName1->c3),
              &(pName2->c1), &(pName2->c2), &(pName2->c3),
              &(pPhoneCall->span));
    }
}
class Man;
class Gang;
class Man {
public:
    Name name;
    int weight;
    Gang *gang;
};
class Gang {
public:
    Man *head;
    vector<Man *> members;
    int relation;
    Gang(Man *launcher) {
        launcher->gang = this;
        members.push_back(launcher);
        relation = launcher->weight;
        head = launcher;
    }
    void add(Man *man) {
        man->gang = this;
        members.push_back(man);
        relation += man->weight;
        if (man->weight > head->weight) head = man;
    }
    void add(Gang *gang) {
        for (auto man : gang->members) {
            man->gang = this;
            this->members.push_back(man);
        }
        this->relation += gang->relation;
        if (gang->head->weight > this->head->weight) this->head = gang->head;
    }
};

bool compareGang(const Gang *a, const Gang *b) {
    return a->head->name < b->head->name;
}

int main() {
    int count, threshold;
    scanf("%d %d", &count, &threshold);
    auto *phoneCalls = static_cast<PhoneCall *>(malloc(sizeof(struct PhoneCall) * count));
    readPhoneCalls(count, phoneCalls);
    map<Name, Man *> mans;
    for (int i = 0; i < count; ++i) {
        PhoneCall phoneCall = phoneCalls[i];

        auto iter1 = mans.find(phoneCall.name1);

        if (iter1 == mans.end()) {
            auto *man1 = new Man{phoneCall.name1, phoneCall.span, nullptr};
            mans.insert(map<Name, Man *>::value_type(phoneCall.name1, man1));
        } else {
            iter1->second->weight += phoneCall.span;
        }
        auto iter2 = mans.find(phoneCall.name2);
        if (iter2 == mans.end()) {
            auto *man2 = new Man{phoneCall.name2, phoneCall.span, nullptr};
            mans.insert(map<Name, Man *>::value_type(phoneCall.name2, man2));
        } else {
            iter2->second->weight += phoneCall.span;
        }
    }
    vector<Gang *> gangs;
    for (int i = 0; i < count; ++i) {
        PhoneCall phoneCall = phoneCalls[i];
        Man *man1 = mans[phoneCall.name1];
        Man *man2 = mans[phoneCall.name2];
        Gang *gang1 = man1->gang;
        Gang *gang2 = man2->gang;

        if (gang1 == nullptr) {
            if (gang2 == nullptr) {
                auto newGang = new Gang(man1);
                gangs.push_back(newGang);
                newGang->add(man2);
            } else {
                gang2->add(man1);
            }
        } else {
            if (gang2 == nullptr) {
                gang1->add(man2);
            } else if (gang1 != gang2) {
                gang1->add(gang2);
                for (auto iter = gangs.begin(); iter != gangs.end(); iter++) {
                    if (*iter == gang2) {
                        gangs.erase(iter);
                        break;
                    }
                }
            }
        }
    }
    vector<Gang *> legalGangs;
    for (auto &gang : gangs) {
        if (gang->members.size() > 2 && gang->relation > threshold * 2) legalGangs.push_back(gang);
    }

    sort(legalGangs.begin(), legalGangs.end(), compareGang);
    cout << legalGangs.size() << endl;
    for (auto &gang : legalGangs) {
        Name headName = gang->head->name;
        printf("%c%c%c %d\n", headName.c1, headName.c2, headName.c3, static_cast<int>(gang->members.size()));
    }
    return 0;
}

