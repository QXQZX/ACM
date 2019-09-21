#include <bits/stdc++.h>
using namespace std;
int n;
int a[505][505], b[505][505], c[505][505];
void make() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) c[i][j] += a[i][k] * b[k][j];
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) b[i][j] = c[i][j];
}
int main() {
    int k;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        cin >> k;
        // k条路经  是  k-1次幂
        while (--k) {
            make();
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) ans += b[i][j];

        cout << ans << endl;
    }
    return 0;
}
