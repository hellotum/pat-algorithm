#include <stdio.h>
#include <map>
#include <string>
#include <iostream>
using namespace std;
string baseDigit[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string higherDigt[13] = {"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
const int maxn = 180;
string numToMar[maxn];
map<string, int > marToNum;
void preTreatment()
{
    for(int i = 0;i < 13;i++) {
        numToMar[i] = baseDigit[i];
        numToMar[i * 13] = higherDigt[i];
        marToNum[baseDigit[i]] = i;
        marToNum[higherDigt[i]] = i * 13;
    }
    for(int i = 1;i < 13;i++){
        for(int j = 1;j<13;j++){
            marToNum[higherDigt[i]+" "+baseDigit[j]] = 13*i + j;
            numToMar[i*13 + j] = higherDigt[i] + " " + baseDigit[j];
        }
    }
}
int main ()
{
    preTreatment();
    int qNumber;
    scanf("%d%*c",&qNumber);
    while(qNumber--) {
        string digit;
        getline(cin, digit);
        string::iterator it = digit.begin();
        if (isdigit(*it)) {
            int index = 0;
            while(it!=digit.end()){
                index = index * 10 + (*it - '0');
                it++;
            }
           cout << numToMar[index] << endl;
        } else {
            printf("%d\n", marToNum[digit]);
        }
    }
    return 0;
}

