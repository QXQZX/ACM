#include <bits/stdc++.h>
using namespace std;
int gra[101][101];
int k, cat[111];
void dfs(int i)
{
    if (i == 0)
        cout << i;
    else
        cout << ' ' << i;
    cat[i] = 1;
    for (int j = 0; j < k; j++)
    {
        if (cat[j] == 0 && gra[i][j] == 1) // 如果j未被访问过  且 i与j之间有边
            dfs(j);                        // 搜索j
    }
}
int main()
{
    ios::sync_with_stdio(false);
    int n, m, u, v;
    cin >> n;
    while (n--)
    {
        cin >> k >> m;
        memset(gra, 0, sizeof(gra));
        memset(cat, 0, sizeof(cat));
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            gra[u][v] = gra[v][u] = 1;
        }
        dfs(0);
        cout << endl;
    }

    return 0;
}
