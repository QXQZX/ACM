#include <math.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
int dp[100001][20];
int main() {
    int n;
    while (~scanf("%d", &n) && n) {
        int i, j, t, x, tt = 0;
        memset(dp, 0, sizeof(dp));
        for (i = 0; i < n; i++) {
            scanf("%d %d", &x, &t);
            dp[t][x + 1]++;  ///对这个的优化就是x+1  可以不用特判0的位置.
            tt = max(tt, t);
        }
        ///只有最开始的位置是确定的，所以从后面的时间往前
        for (i = tt - 1; i >= 0; i--) {
            ///往前面推，在此位置接到的馅饼数，是这一位置接到的加上上一秒接到的和
            for (j = 14; j >= 0; j--) {
                dp[i][j] +=
                    max(dp[i + 1][j - 1], max(dp[i + 1][j], dp[i + 1][j + 1]));
            }
        }
        printf("%d\n", dp[0][6]);
    }
    return 0;
}