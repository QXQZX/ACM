#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[505][505], n, t;
    while (cin >> n) {
        int deg = 0;
        int ans_max = 0;
        int ans_min = 550;
        for (int i = 1; i <= n; i++) {
            deg = 0;
            for (int j = 1; j <= n; j++) {
                cin >> t;
                a[i][j] = (t == 0) ? 1 : 0;
                a[i][j] = (i == j) ? 0 : a[i][j];
                if (a[i][j] == 1) deg++;
            }

            ans_max = max(ans_max, deg);
            ans_min = min(ans_min, deg);
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                printf(j == n ? "%d\n" : "%d ", a[i][j]);
        }
        cout << ans_max << ' ';
        cout << ans_min << endl;
    }

    return 0;
}