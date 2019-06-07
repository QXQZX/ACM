#include <bits/stdc++.h>
#define ll long long
int arr[110];
int vis[110];
int num[110];
int b[110];
int main() {
    int n, m, q;
    while (~scanf("%d %d %d", &n, &m, &q)) {
        int flag = 1;
        memset(b, 0, sizeof(b));
        memset(vis, 0, sizeof(vis));
        memset(num, -1, sizeof(num));
        memset(arr, -1, sizeof(arr));
        for (int i = 1; i <= n; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 1; i <= q; i++) {
            scanf("%d", &b[i]);
            vis[b[i]] = 1;
        }
        if (vis[0] == 0) {
            flag = 0;
        }
        num[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (vis[(b[i] + b[j]) % m] && (b[i] + b[j]) % m == 0) {
                    num[b[i]] = b[j];
                    num[b[j]] = b[i];
                    break;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (num[b[i]] == -1) {
                flag = 0;
            }
        }
        if (!flag) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}