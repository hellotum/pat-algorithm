#include <cstdio>

const int maxn = 100010;
struct NODE{
    char data;
    int next;
    bool flag;
}node[maxn];

int main()
{
    for(int i = 0; i < maxn; i++){
        node[i].flag = false;
    }
    int firstAddress, secondAddress, n;
    scanf("%d%d%d", &firstAddress, &secondAddress, &n);
    int now, next;
    char data;
    for(int i = 0; i < n; i++){
        scanf("%d %c %d", &now, &data, &next);
        node[now].data = data;
        node[now].next = next;
    }
    int p;
    for(p = firstAddress; p != -1; p = node[p].next){
        node[p].flag = true;
    }
    for(p = secondAddress; p != -1; p = node[p].next){
        if(node[p].flag) break;
    }
    if(p != -1){
        printf("%05d\n", p);
    }else{
        printf("-1\n");
    }
    return 0;
}
