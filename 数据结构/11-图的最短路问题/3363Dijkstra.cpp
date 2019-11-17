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
int n, m;
int gra[505][505];
int vis[505], money[505][505];

void dijkstra(int s, int d) {
    int dist[505];
    int mon[505];
    for (int i = 0; i < n; i++) {
        dist[i] = gra[s][i];
        mon[i] = money[s][i];
    }
    vis[s] = 1;
    for (int i = 1; i < n; i++) {
        int min = inf;
        int index = s;
        for (int j = 0; j < n; j++) {
            // 如果这个点没有被访问过，而且这个点的最短路径比min小；
            // 这个循环的作用是找出与起点v0相连的点所形成的边，哪个边的权值最小（最短路径最短））
            if (!vis[j] && dist[j] < min) {
                min = dist[j];
                index = j;
            }
        }
        vis[index] = 1;
        for (int j = 0; j < n; j++) {
            // 没有后面判断两个点之间是否连通会错
            if (!vis[j] && gra[index][j] < inf) {
                // 这个点与index点的路径+起点s到index的最短路径 <
                // 起点s到index的最短路径
                if (dist[j] > gra[index][j] + dist[index]) {
                    dist[j] = gra[index][j] + dist[index];
                    mon[j] = money[index][j] + mon[index];
                } else if (dist[j] == gra[index][j] + dist[index] &&
                           mon[index] + money[index][j] < mon[j]) {
                    mon[j] = mon[index] + money[index][j];
                }
            }
        }
    }
    printf("%d %d\n", dist[d], mon[d]);
}
int main() {
    int t, s, d, u, v, len, mon;
    cin >> t;
    while (t--) {
        cin >> n >> m >> s >> d;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                gra[i][j] = i == j ? 0 : inf;
            }
        }

        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < m; i++) {
            cin >> u >> v >> len >> mon;
            gra[u][v] = gra[v][u] = len;
            money[u][v] = money[v][u] = mon;
        }
        dijkstra(s, d);
    }
    return 0;
}