#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1001][1001];

int main() {
    while (cin >> n >> m) {
        int x, y;
        memset(a, 0, sizeof(a));
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            a[x - 1][y - 1] = 1;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                printf(j == n - 1 ? "%d\n" : "%d ", a[i][j]);
    }
    return 0;
}
