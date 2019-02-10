#include<stdio.h>
int main()
{

    int T;
    scanf("%d", &T);
    long long A, B, C;
    long long temp;
    int id = 1;

    while (T--){
        scanf("%lld%lld%lld", &A, &B, &C);
        temp = A + B;
        if(A > 0 && B > 0 && temp < 0){
            printf("Case #%d: true\n", id);
        }else if(A < 0 && B < 0 && temp >= 0){
            printf("Case #%d: false\n", id);
        }else{
            if(temp > C){
                printf("Case #%d: true\n", id);
            }else{
                printf("Case #%d: false\n", id);
            }
        }
        id++;
    }

    return 0;
}