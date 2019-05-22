/*01背包*/
/*#include <bits/stdc++.h>
using namespace std;
int dp[111][1111];
int a[111], b[111];
int main()
{
    int n, x;
    memset(dp, 0, sizeof(dp));
    while (~scanf("%d %d", &n, &x))
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a[i], &b[i]);
        }
        for (int i = 0; i <= x; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (i - a[j] >= 0)
                {
                    dp[j][i] = max(dp[j - 1][i], dp[j - 1][i - a[j]] + b[j]);
                }
            }
        }
        printf("%d\n", dp[x]);
    }
    return 0;
}*/
/*01背包*/
#include <bits/stdc++.h>
using namespace std;
int dp[1111];
int a[111], b[111];
int main()
{
    int n, x;

    while (~scanf("%d %d", &n, &x))
    {
        memset(dp, 0, sizeof(dp)); // 少重置错
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a[i], &b[i]);
        }
        for (int i = 0; i < n; i++) // 遍历哈士奇个数
        {
            for (int j = x; j >= 0; j--) // 遍历剩余的钱
            {
                if (j - a[i] >= 0)
                {
                    dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
                }
            }
        }
        printf("%d\n", dp[x]);
    }
    return 0;
}
