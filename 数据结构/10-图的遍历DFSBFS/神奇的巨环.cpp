/*模仿别人代码*/
#include <bits/stdc++.h>
using namespace std;
char gra[222][222];
int cat[222][222];
int n, m, flag;
void dfs(int x, int y, int i, int j)
{
    cat[x][y] = 1;
    if (flag)
        return;
    if (x - 1 >= 0 && gra[x - 1][y] == gra[x][y])
    {
        if (cat[x - 1][y] && ((x - 1 != i) || (y != j)))
            flag = 1;
        else if (!cat[x - 1][y])
            dfs(x - 1, y, x, y);
    }
    if (x + 1 < n && gra[x + 1][y] == gra[x][y])
    {
        if (cat[x + 1][y] && ((x + 1 != i) || (y != j)))
            flag = 1;
        else if (!cat[x + 1][y])
            dfs(x + 1, y, x, y);
    }
    if (y - 1 >= 0 && gra[x][y - 1] == gra[x][y])
    {
        if (cat[x][y - 1] && ((x != i) || (y - 1 != j)))
            flag = 1;
        else if (!cat[x][y - 1])
            dfs(x, y - 1, x, y);
    }
    if (y + 1 < m && gra[x][y + 1] == gra[x][y])
    {
        if (cat[x][y + 1] && ((x != i) || (y + 1 != j)))
            flag = 1;
        else if (!cat[x][y + 1])
            dfs(x, y + 1, x, y);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    while (cin >> n >> m)
    {
        memset(cat, 0, sizeof(cat));
        flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> gra[i][j];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!cat[i][j])
                    dfs(i, j, i, j);
                if (flag)
                    break;
            }
            if (flag)
                break;
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}