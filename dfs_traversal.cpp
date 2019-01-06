#include <vector>
#include <math.h>
const int maxn = 100010;
int n, k, targetSum, maxSumSqu = -1, numberArray[maxn];

std::vector temp, ans;
void dfs(int index, int nowK, int sum, int sumSqu) {
    if (nowK == k && sum == targetSum) {
        if (sumSqu > maxSumSqu) {
            maxSumSqu = sumSqu + numberArray[index] * numberArray[index];
            ans = temp;
        }
        return;
    }
    if (index > k || sum > targetSum || nowK == n) return;
    temp.push_back(numberArray[index]);
    dfs(index + 1, nowK++, sum + numberArray[index], sumSqu + numberArray[index] * numberArray[index]);
    temp.pop_back();
    dfs(index + 1, nowK, sum, sumSqu);
}
