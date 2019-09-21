#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int n, k, a[505][505], b[505][505], c[505][505];
void make() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) c[i][j] += b[i][k] * a[k][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) a[i][j] = c[i][j];
    }
}
int main() {
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        cin >> k;
        while (--k) {
            make();
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans += a[i][j];
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}