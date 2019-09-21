#include <bits/stdc++.h>
using namespace std;
int gra[1001][1001]; // 用临街矩阵储存图
int n, m, cat[1001]; // 访问标记
void dfs(int i)
{
    cat[i] = 1;
    for (int j = 0; j < n; j++)
    {
        if (cat[j] == 0 && gra[i][j] == 1)
        {
            gra[i][j] = 0;
            dfs(j);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    while (cin >> n >> m)
    {
        int a, b;
        memset(gra, 0, sizeof(gra));
        memset(cat, 0, sizeof(cat));
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            gra[a][b] = 1;
        }
        dfs(n);
        if (cat[1] == 1) // 能访问到 1 即为true
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
