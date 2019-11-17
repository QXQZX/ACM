// 数据结构实验之图论八：欧拉回路
// 并查集实现
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
int f[1005];  // 记录祖先
int p[1005];  // 记录每个点的度

int find_root(int i) {
    if (f[i] == i)
        return i;
    else {
        f[i] = find_root(f[i]);
        return f[i];
    }
}

void union_set(int u, int v) {
    int t1 = find_root(u);
    int t2 = find_root(v);
    if (t1 != t2) f[t2] = t1;
}
int main() {
    int n, m, t, u, v;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        memset(gra, 0, sizeof(gra));
        memset(p, 0, sizeof(p));
        for (int i = 1; i <= n; i++) f[i] = i;
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            union_set(f[u], f[v]);
            p[u]++;
            p[v]++;
        }
        int flag = 1, cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (f[i] == i) {
                cnt++;
            }
            // 无向欧拉图每个点 都是偶数度
            if (p[i] % 2) {
                flag = 0;
                break;
            }
        }
        if (cnt != 1 || !flag)
            printf("0\n");
        else
            printf("1\n");
    }
}