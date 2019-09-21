#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
// int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int n, m, xx, yy;
int a[20][20], cat[20][20];

int ans;
void dfs(int x, int y) {
    if (x == n && y == m) {
        ans++;
        return;
    }

    if (x > n || y > m || x < 0 || y < 0) return;
    if (cat[x][y] == 0 && a[x][y] == 0) {
        cat[x][y] = 1;
        dfs(x + 1, y);
        dfs(x, y + 1);
        cat[x][y] = 0;
    }
}
int main() {
    cin >> n >> m >> xx >> yy;

    memset(a, 0, sizeof(a));
    memset(cat, 0, sizeof(cat));
    a[xx][yy] = 1;

    a[xx - 2][yy - 1] = 1;
    a[xx - 1][yy - 2] = 1;
    a[xx + 1][yy - 2] = 1;
    a[xx + 2][yy - 1] = 1;

    a[xx - 2][yy + 1] = 1;
    a[xx - 1][yy + 2] = 1;
    a[xx + 1][yy + 2] = 1;
    a[xx + 2][yy + 1] = 1;
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= m; j++) cout << a[i][j] << " ";

    //     cout << endl;
    // }
    ans = 0;
    dfs(0, 0);
    cout << ans << endl;
    return 0;
}

/*
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
}*/