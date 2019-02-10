#include <cstdio>

const int maxn_n = 1111;
double p[maxn_n] = {0};
int main(){
    int k, n, count = 0;
    double a;
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        scanf("%d %lf", &n, &a);
        p[n] += a;
    }
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        scanf("%d %lf", &n, &a);
        p[n] += a;
    }
    for(int i = 0; i < maxn_n; i++){
        if(p[i] != 0)   count++;
    }
    printf("%d", count);
    for(int i = maxn_n-1; i >= 0; i--) {
        if (p[i] != 0) {
            printf(" %d %.1f", i, p[i]);
        }
    }
    return 0;
}

