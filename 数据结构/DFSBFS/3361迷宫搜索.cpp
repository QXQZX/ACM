#include <bits/stdc++.h>
using namespace std;
int gra[3003][3003];
int cat[1001], num[1001];
int n, m, s, cnt;
void dfs(int i)
{
    cat[i] = 1; // 已经访问 标记
    num[cnt++] = i;
    for (int j = 0; j <= n; j++)
    {
        if (cat[j] == 0 && gra[i][j] == 1) // 如果j点未来过 且 i与j间有边
        {
            dfs(j);         // 去时递归
            num[cnt++] = i; // 回时 存从迷宫回来的路线
        }
    }
}
int main()
{
    int t, u, v;
    cin >> t;
    while (t--)
    {
        memset(gra, 0, sizeof(gra));
        memset(cat, 0, sizeof(cat));
        cin >> n >> m >> s;
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            gra[u][v] = gra[v][u] = 1;
        }
        cnt = 0;
        dfs(s); // 搜索第一个点
        for (int i = 0; i < cnt; i++)
        {
            if (i == 0)
                cout << num[i];
            else
                cout << ' ' << num[i];
        }
        if (cnt != 2 * n - 1)
            cout << ' ' << "0";
        cout << endl;
    }
    return 0;
}