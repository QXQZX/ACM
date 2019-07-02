#include <bits/stdc++.h>
using namespace std;
int dp[5000][5000];
int main()
{
    int n, m, q, a, b;
    while (~scanf("%d %d", &n, &m))
    {
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d", &a, &b);
            dp[a][b] = 1;
        }
        scanf("%d", &q);
        while (q--)
        {
            scanf("%d %d", &a, &b);
            if (dp[a][b])
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}