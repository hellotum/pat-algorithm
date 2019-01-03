#include <cstdio>
#include <algorithm>
const int maxn = 100010;
struct NODE {
    int data;
    int next;
    bool flag;
    int address;
}node[maxn];
bool cmp(NODE firstNode, NODE secondNode){
    if(!firstNode.flag || !secondNode.flag) return firstNode.flag > secondNode.flag;
    else return firstNode.data < secondNode.data;
}
int main()
{
    for(int i = 0; i < maxn; i++) {
        node[i].flag = false;
    }
    int root, n;

    scanf("%d%d", &n, &root);
    int address;
    for(int i = 0; i < n; i++) {
        scanf("%d", &address);
        scanf("%d%d", &node[address].data, &node[address].next);
        node[address].address = address;
    }
    int count = 0;
    int p;
    for(p = root; p != -1; p = node[p].next)
    {
        node[p].flag = true;
        count++;
    }
    if(count != 0) {
        std::sort(node, node + maxn, cmp);
        printf("%d %0d\n", count, node[0].address);
        for (int i = 0; i < count; i++) {
            if (i != count-1) {
                printf("%05d %d %05d\n", node[i].address, node[i].data, node[i+1].address);
            } else {
                printf("%05d %d -1\n", node[i].address, node[i].data);
            }
        }
    }else{
        printf("0 -1");
    }

    return 0;
};

