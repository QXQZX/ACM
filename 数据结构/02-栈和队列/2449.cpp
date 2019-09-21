#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;

int ans, n, m;
int gra[111][111];  // 矩阵
int vis[111][111];  // 标记
void dfs(int x, int y) {
    if (x >= n || y >= m || x < 0 || y < 0) return;
    if (x == n - 1 && y == m - 1) {
        ans++;
        return;
    }
    if (vis[x][y] == 0 && gra[x][y] == 0) {
        vis[x][y] = 1;
        dfs(x + 1, y);
        dfs(x, y + 1);
        dfs(x - 1, y);
        dfs(x, y - 1);
        vis[x][y] = 0;  // 递归完后 点标为未走过  防止影响其他情况
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(gra, 0, sizeof(gra));
        memset(vis, 0, sizeof(vis));
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> gra[i][j];
            }
        }
        ans = 0;
        dfs(0, 0);
        cout << ans << endl;
    }

    return 0;
}