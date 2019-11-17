// 最小生成树Kruskal算法（并查集思想）
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
struct node {
    int u, v, w;
} e[1004];
int n, f[1004];
bool cmp(node a, node b) { return a.w < b.w; }
void init() {
    for (int i = 1; i <= n; i++) f[i] = i;
}
int find_root(int i) {
    if (f[i] == i)
        return f[i];
    else {
        f[i] = find_root(f[i]);
        return f[i];
    }
}
bool Merge(int u, int v) {
    int t1 = find_root(u);
    int t2 = find_root(v);
    if (t1 == t2) {
        return true;
    } else {
        f[t2] = t1;
        return false;
    }
}
int main() {
    int m;
    while (cin >> n >> m) {
        init();
        for (int i = 1; i <= m; i++) {
            cin >> e[i].u >> e[i].v >> e[i].w;
        }

        sort(e + 1, e + m + 1, cmp);
        int ans = 0, cnt = 0;
        for (int i = 1; i <= m; i++) {
            if (cnt == n - 1) break;
            if (!Merge(e[i].u, e[i].v)) {
                ans += e[i].w;
                cnt++;
            }
        }
        if (cnt == n - 1) {
            printf("%d\n", ans);
        } else {
            printf("-1\n");
        }
    }
}