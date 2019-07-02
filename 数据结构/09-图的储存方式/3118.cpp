#include <bits/stdc++.h>
using namespace std;
struct node
{
    int u; // 起点
    int v; // 终点
    int w; // 权值
} gra[500005];
bool cmp(node a, node b)
{
    if (a.w != b.w)
        return a.w < b.w;
    else if (a.u != b.u)
        return a.u < b.u;
    else
        return a.v < b.v;
}
int main()
{
    ios::sync_with_stdio(false);
    int n, k, m;
    while (cin >> n >> m)
    {
        // memset(gra, 0, sizeof());
        for (int i = 0; i < m; i++)
            cin >> gra[i].u >> gra[i].v >> gra[i].w;
        sort(gra, gra + m, cmp); // 按要求排序
        int q;
        cin >> q;
        while (q--)
        {
            cin >> k;
            cout << gra[k].u << ' ' << gra[k].v << endl;
        }
    }
    return 0;
}
