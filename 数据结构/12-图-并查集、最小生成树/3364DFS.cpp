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
int gra[1005][1005];
int vis[1005];
// 如果用dsf还是有顶点未被访问，就说明图不连通
void dfs(int t, int n) {
    vis[t] = 1;
    for (int i = 1; i <= n; i++) {
        if (!vis[i] && gra[t][i]) {
            dfs(i, n);
        }
    }
}

int main(void) {
    int t, n, m, i, flag;
    int u, v, p[1001];
    cin >> t;
    while (t--) {
        cin >> n >> m;
        flag = 1;
        memset(gra, 0, sizeof(gra));
        memset(vis, 0, sizeof(vis));
        memset(p, 0, sizeof(p));
        for (i = 0; i < m; i++) {
            cin >> u >> v;
            gra[u][v] = gra[v][u] = 1;
            p[u]++;
            p[v]++;
        }

        dfs(1, n);
        for (i = 1; i <= n; i++) {
            if (!vis[i] || (p[i] % 2)) {
                flag = 0;
                break;
            }
        }
        printf(flag == 1 ? "1\n" : "0\n");
    }

    return 0;
}