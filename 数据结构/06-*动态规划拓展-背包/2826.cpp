#include <bits/stdc++.h>
using namespace std;
int vi[10005], wi[10005];
int dp[10005];
int main()
{
    int n, v;
    while (cin >> n >> v)
    {
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n; i++)
            cin >> wi[i];
        for (int i = 0; i < n; i++)
            cin >> vi[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = vi[i]; j <= v; j++)
            {
                if (j >= vi[i])
                    dp[j] = max(dp[j], dp[j - vi[i]] + wi[i]);
            }
        }
        cout << dp[v] << endl;
    }
    return 0;
}