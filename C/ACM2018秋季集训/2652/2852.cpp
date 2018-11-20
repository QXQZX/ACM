#include <cstring>
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int i, j, n;
    int a[101][101];
    int dp[101][101];
    while (~scanf("%d", &n))
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
                scanf("%d", &a[i][j]);
        }
        for (i = 1; i <= n; i++)
            dp[n][i] = a[n][i];
        for (i = n; i > 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                if (dp[i][j] < dp[i][j + 1]) //注意：这里是dp祖上一层的数组比较
                    dp[i - 1][j] = dp[i][j] + a[i - 1][j];
                else
                    dp[i - 1][j] = dp[i][j + 1] + a[i - 1][j];
            }
        }
        printf("%d\n", dp[1][1]);
    }
    return 0;
}