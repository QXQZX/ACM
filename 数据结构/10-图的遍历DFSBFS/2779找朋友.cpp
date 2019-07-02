/*
// bfs
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, y, step;
};
int n, m;
char gra[16][16]; // 临接表
int cat[16][16];
//定义方向数组
int gotox[4] = {0, 0, 1, -1};
int gotoy[4] = {1, -1, 0, 0};

int bfs(int a, int b)
{
    cat[a][b] = 1;
    node t = {a, b, 0};
    queue<node> q;
    q.push(t);
    while (!q.empty())
    {
        node temp = q.front();
        q.pop();
        if (gra[temp.x][temp.y] == 'Y')
            return temp.step;
        for (int i = 0; i < 4; i++)
        {
            node d;
            d.x = temp.x + gotox[i];
            d.y = temp.y + gotoy[i];
            d.step = temp.step + 1;
            if (d.x >= 0 && d.x < n && d.y >= 0 && d.y < m && !cat[d.x][d.y] && gra[d.x][d.y] != '#')
            {
                q.push(d);
                cat[d.x][d.y] = 1;
            }
        }
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    while (cin >> n >> m)
    {
        int a, b;
        memset(cat, 0, sizeof(cat));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> gra[i][j];
                if (gra[i][j] == 'X')
                {
                    a = i;
                    b = j;
                }
            }
        }
        cout << bfs(a, b) << endl;
    }
    return 0;
}
/*dfs*/
#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;
int n, m, ans, MIN;
char gra[16][16]; // 临接表
int cat[16][16];
/*定义方向数组*/
int gotox[4] = {0, 0, 1, -1};
int gotoy[4] = {1, -1, 0, 0};

void dfs(int a, int b, int ans)
{
    cat[a][b] = 1;
    if (ans >= MIN) // 步数比已经找出的最小的 步数MIN 还有要大
        return;
    if (ans < MIN && gra[a][b] == 'Y') // 步数比最小的已经找出的 步数MIN 还要小且已经找到Y
    {                                  // 如果找不到Y  MIN 仍然是INF
        MIN = ans;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int x = a + gotox[i]; // 遍历四个方向的邻点
        int y = b + gotoy[i];
        if (x >= 0 && x < n && y >= 0 && y < m && !cat[x][y] && gra[x][y] != '#')
        {
            cat[x][y] = 1;
            dfs(x, y, ans + 1); // 符合条件 搜索 步数+1  递归搜下一点
            cat[x][y] = 0;      // 递归完无果  把访问过的点标记为未访问
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    while (cin >> n >> m)
    {
        int a, b;
        memset(cat, 0, sizeof(cat));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> gra[i][j];
                if (gra[i][j] == 'X')
                {
                    a = i;
                    b = j;
                }
            }
        }
        MIN = INF;
        ans = 0;
        dfs(a, b, ans);
        if (MIN != INF)
            cout << MIN << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}