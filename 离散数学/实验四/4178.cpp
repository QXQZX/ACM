#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
struct node {
    int parent;
    int u, v, w;
} a[102400];

bool cmp(node a, node b) { return a.w < b.w; }

int find_root(int x) {
    if (x == a[x].parent) {
        return x;
    }
    return find_root(a[x].parent);
}

void union_set(int u, int v) {
    int xr = find_root(u);
    int yr = find_root(v);
    a[xr].parent = a[yr].parent;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        for (int i = 1; i <= m; i++) {
            cin >> a[i].u >> a[i].v >> a[i].w;
        }

        sort(a + 1, a + m + 1, cmp);
        for (int i = 1; i <= n; i++) {  // 每个点的祖宗都是自己
            a[i].parent = i;
        }
        int ans = 0;  // 记录最小的权值和
        int cnt = 0;  // 记录边的个数
        for (int i = 1; i <= m; i++) {
            if (find_root(a[i].u) != find_root(a[i].v)) {
                cnt++;
                ans += a[i].w;
                union_set(a[i].u, a[i].v);  // 将不形成环的两边连起来
            }
        }
        // n个点  n-1条边  否则不能构成最小生成树
        if (cnt == n - 1)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }
}
