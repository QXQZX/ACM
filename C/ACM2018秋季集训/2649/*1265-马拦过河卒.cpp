#include <iostream>
using namespace std;
int main()
{
    int n, m, x, y, i, j;
    int g[20][20];
    long long int f[20][20];
    cin >> n >> m >> x >> y;
    g[x][y] = 1; //马控制的的点设为1
    g[x - 1][y - 2] = 1;
    g[x + 1][y - 2] = 1;
    g[x - 2][y - 1] = 1;
    g[x + 2][y - 1] = 1;
    g[x - 2][y + 1] = 1;
    g[x + 2][y + 1] = 1;
    g[x - 1][y + 2] = 1;
    g[x + 1][y + 2] = 1;

    for (i = 1; i <= n; i++) //找出卒在左边界能走的点
    {
        if (g[i][0] != 1)
            f[i][0] = 1;
        else
        {
            for (; i <= n; i++) //继续外一层循环
                f[i][0] = 0;
        }
    }
    for (i = 1; i <= m; i++) //找出卒在上边界能走的点
    {
        if (g[0][i] != 1)
            f[0][i] = 1;
        else
        {
            for (; i <= m; i++) //继续外一层循环
                f[0][i] = 0;
        }
    }
    for (i = 1; i <= n; i++) //找出卒在除上左边界以外能走的点
    {
        for (j = 1; j <= m; j++)
        {
            if (g[i][j] == 1)
                f[i][j] = 0;
            else
                f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    }
    cout << f[n][m] << endl;
    return 0;
}