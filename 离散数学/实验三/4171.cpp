#include <bits/stdc++.h>
#define ll long long
using namespace std;
int arr[110];
int vis[110];
int num[110];
int b[110];
int main() {
    int n, m, q;
    while (cin >> n >> m >> q) {
        int flag = 1;
        memset(b, 0, sizeof(b));
        memset(vis, 0, sizeof(vis));
        memset(num, -1, sizeof(num));
        memset(arr, -1, sizeof(arr));
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            vis[arr[i]] = 1;
        }
        for (int i = 1; i <= q; i++) {
            cin >> b[i];
        }
        if (vis[0] == 0) {
            flag = 0;
        }
        num[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (vis[(arr[i] + arr[j]) % m] && (arr[i] + arr[j]) % m == 0) {
                    num[arr[i]] = arr[j];
                    num[arr[j]] = arr[i];
                    break;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (num[arr[i]] == -1) {
                flag = 0;
            }
        }
        if (!flag) {
            cout << "-1" << endl;
        } else {
            for (int i = 1; i <= q; i++) {
                cout << num[b[i]] << endl;
            }
        }
    }
    return 0;
}