#include <c++/4.2.1/bits/stdc++.h>
#include <iostream>
using namespace std;
int n, m, a[11][11];
int ans = INT_MAX;
void search(int i, int j, int sum) {
    sum += a[i][j];
    if (i < m - 1) search(i + 1, j, sum);
    if (j < n - 1) search(i, j + 1, sum);
    if (i == m - 1 && j == n - 1 && sum < ans && sum > 0) ans = sum;
}
int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    search(0, 0, 0);
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}