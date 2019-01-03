#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;
int intPart(string num_1 ){
    int intPart = 0;
    for(string::iterator it = num_1.begin(); it != num_1.end(); it++) {
        if (*it != '.') {
            break;
        }
        intPart++;
    }
    return intPart;
}

bool ifEqual(int digit, string num_1, string num_2){
    int num_1_int = intPart(num_1);
    int num_2_int = intPart(num_2);
    if(num_1_int != num_2_int)  return false;
    for(int i = 0; i < digit; i++) {
        if (num_1[i] != num_2[i]) return false;
    }
    return true;
}

int main()
{
    int n;
    string num_1, num_2;
    int coefficient;
    scanf("%d%s%s",&n,&num_1,&num_2);

    if(ifEqual(n, num_1, num_2)){
        printf("YES ");
        printf("0.%s^%d", num_1.substr(0, (unsigned)intPart(num_1)), intPart(num_1));
    }
        else{
        printf("NO ");
    }
}