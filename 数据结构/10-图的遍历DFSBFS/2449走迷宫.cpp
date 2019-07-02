#include <bits/stdc++.h>
using namespace std;
int gra[111][111]; // 临接矩阵
int cat[111][111]; // 标记
int ans, n, m;
void dfs(int x, int y)
{
    if (x > n || y > m || x < 1 || y < 1)
        return;
    if (x == n && y == m)
    {
        ans++;
        return;
    }
    if (cat[x][y] == 0 && gra[x][y] == 0)
    {
        cat[x][y] = 1;
        dfs(x + 1, y);
        dfs(x, y + 1);
        dfs(x - 1, y);
        dfs(x, y - 1);
        cat[x][y] = 0; // 返回的时候重置
    }
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        memset(cat, 0, sizeof(cat));
        memset(gra, 0, sizeof(gra));
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> gra[i][j];
            }
        }
        ans = 0;
        dfs(1, 1);
        cout << ans << endl;
    }
    return 0;
}
