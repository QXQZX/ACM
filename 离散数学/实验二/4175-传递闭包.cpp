#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int n, m, a[111][111];
int flag[111];
void warshell() {
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            if (a[i][j]) {
                for (int k = 1; k <= n; k++) {
                    a[i][k] = a[i][k] + a[j][k];
                    if (a[i][k] >= 1) a[i][k] = 1;
                }
            }
        }
    }
}
int main() {
    while (cin >> n >> m) {
        int u, v;
        int ans = 0;
        memset(a, 0, sizeof(a));
        memset(flag, 1, sizeof(flag));
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            a[u][v] = 1;
        }
        warshell();
        for (int j = 1; j <= n; j++) {
            for (int i = 1; i <= n; i++) {
                if (i == j) {
                    if (a[i][j]) {
                        flag[j] = 0;
                        break;
                    }
                } else if (!a[i][j] && !a[j][i]) {
                    flag[j] = 0;
                    break;
                }
            }

            if (flag[j]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 4ms
Take Memory: 200KB
Submit time: 2019-04-11 11:20:09
****************************************************/