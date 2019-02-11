#include <cstdio>
struct Poly{
    int exp;
    double cof;
}poly[1001];
const int maxn_n = 2001;
double ans[maxn_n] = {0};
int main(){
    int k1, k2;
    scanf("%d", &k1);
    for(int i = 0; i < k1; i++) {
        scanf("%d%lf", &poly[i].exp, &poly[i].cof);

    }
    scanf("%d", &k2);
    for(int i = 0; i < k2; i++) {
        int e;
        double c;
        scanf("%d%lf", &e, &c);
        for(int j = 0; j < k1; j++){
            ans[e + poly[j].exp] += c * poly[j].cof;
        }
    }
    int count = 0;
    for(int i = 0; i < maxn_n; i++) {
        if (ans[i] != 0) count++;
    }
    printf("%d", count);
    for(int i = maxn_n; i >= 0; i--){
        if(ans[i] != 0) printf(" %d %.1f", i, ans[i]);
    }
    return 0;
}

