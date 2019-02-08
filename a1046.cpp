#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 100005;
int dis[MAXN], A[MAXN];
int main(){
    int N, sum = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
        sum += A[i];
        dis[i] = sum;
    }
    int query;
    scanf("%d", &query);
    while (query--) {
        int left, right;
        scanf("%d%d", &left, &right);
        if (right < left) swap(left, right);
        int firstAns = dis[right - 1] - dis[left - 1];
        printf("%d\n", min(firstAns, dis[N] - firstAns));
    }

    return 0;
}
