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
#define inf 0x3fffff
using namespace std;
int gra[1001][1001];
int vis[1001], dist[1001];

void prim(int n) {
    for (int i = 0; i <= n; i++) dist[i] = gra[1][i];
    int min = inf, flag = 1, index;

    for (int i = 1; i <= n; i++) {
        min = inf;
        for (int j = 1; j <= n; j++) {
            if (!vis[j] && dist[j] < min) {
                min = dist[j];
                index = j;
            }
        }
        // 找不到 相通的
        if (min == inf) {
            flag = 0;
            break;
        }
        vis[index] = 1;
        for (int j = 1; j <= n; j++) {
            if (!vis[j] && dist[j] > gra[index][j]) dist[j] = gra[index][j];
        }
    }

    if (!flag) {
        cout << "-1" << endl;
    } else {
        int ans = 0;
        for (int i = 1; i <= n; i++) ans += dist[i];
        cout << ans << endl;
    }
}

int main() {
    int n, m, u, v, w;
    while (cin >> n >> m) {
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == j)
                    gra[i][j] = 0;
                else
                    gra[i][j] = inf;
            }
        }
        for (int i = 0; i < m; i++) {
            cin >> u >> v >> w;
            gra[u][v] = gra[v][u] = w;
        }
        prim(n);
    }
}