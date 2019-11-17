// 拓扑排序条件
// 有向图 无环
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
int gra[11][11];
int vis[11], du[11];
int n, m;

bool topSort() {
    int flag;
    // 依次访问寻找n个节点
    for (int i = 1; i <= n; i++) {
        flag = 0;
        // 每次查找最先被找到的（未标记） 但入度为0的点
        for (int j = 1; j <= n; j++) {
            if (!du[j] && !vis[j]) {
                vis[j] = 1;
                for (int k = 1; k <= n; k++) {
                    if (gra[j][k]) du[k]--;
                }
                flag = 1;
                break;
            }
        }
        // 当出现环的时候 即无法找到入度为0的点的
        if (!flag) break;
    }
    return (flag == 1);
}
int main() {
    int u, v;
    while (cin >> n >> m) {
        memset(gra, 0, sizeof(gra));
        memset(vis, 0, sizeof(vis));
        memset(du, 0, sizeof(du));
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            gra[u][v] = 1;
            du[v]++;
        }
        if (topSort())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}