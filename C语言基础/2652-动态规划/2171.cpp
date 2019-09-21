#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[1001], dp[1001];
void solve()
{
    for (int i = 1; i <= n; i++)
    {
        dp[i] = a[i];
        for (int j = 1; j < i; j++)
        {
            if (a[j] < a[i])
            {
                dp[i] = max(dp[i], dp[j] + a[i]); //化解最小问题解决
            }
        }
    }
    sort(dp, dp + n + 1);
    cout << dp[n] << endl;
}
int main()
{
    while(cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        solve();
    }
    return 0;
}
