#include "bits/stdc++.h"
using namespace std;
int pre[100005];
int find(int x) {
    while (x != pre[x]) x = pre[x];
    return x;
}
void make(int a, int b) {
    int find_a = find(a);
    int find_b = find(b);
    if (find_a != find_b) pre[find_a] = find_b;
}
int main() {
    int t, n, m, x, y;
    cin >> t;

    for (int k = 1; k <= t; k++) {
        cin >> n >> m;

        // n个点的掌门都是自己
        for (int i = 0; i <= n; i++) {
            pre[i] = i;
        }

        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            make(x, y);
        }

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (pre[i] == i) ans++;
        }

        cout << "Case " << k << ": " << ans << endl;
    }

    return 0;
}