#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>

using namespace std;
const int maxn =  510;
set<int> s[maxn];
int main ()
{
    int n,m;
    int firstSet, secondSet;
    int number;
    int q;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&m);
        for(int j = 0; j<m; j++){
            scanf("%d", &number);
            s[i].insert(number);
        }
    }
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        scanf("%d %d",&firstSet,&secondSet);
        int count = 0;
        for(set<int>::iterator it = s[firstSet-1].begin();it!=s[firstSet-1].end();it++){
            if(s[secondSet-1].find(*it)!=s[secondSet-1].end())  count++;
        }
        printf("%.2f%%",count*100.0/(s[firstSet-1].size()+s[secondSet-1].size()-count));
    }

    return 0;
}