#include <algorithm>
#include <iostream>
using namespace std;
int n;
int a[1001], dp[1001];
void solve() {
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j] + 1);  //化解最小问题解决
            }
        }
    }
    sort(dp + 1, dp + n + 1);
    cout << dp[n] << endl;
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    solve();
    return 0;
}
