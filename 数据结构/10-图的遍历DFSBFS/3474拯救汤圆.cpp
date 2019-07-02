#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, y, step;
};
int n, m;
char gra[333][333];
int cat[333][333];
/*定义方向数组*/
int gotox[4] = {0, 0, 1, -1};
int gotoy[4] = {1, -1, 0, 0};

int bfs(int a, int b)
{
    cat[a][b] = 1;
    node p = {a, b, 0};
    queue<node> q;
    q.push(p);
    while (!q.empty())
    {
        node temp = q.front();
        q.pop();
        if (gra[temp.x][temp.y] == 'O')
            return temp.step;
        for (int i = 0; i < 4; i++)
        {
            node d;
            d.x = temp.x + gotox[i];
            d.y = temp.y + gotoy[i];
            d.step = temp.step + 1;
            if (d.x >= 0 && d.y >= 0 && d.x < n && d.y < m && !cat[d.x][d.y] && gra[d.x][d.y] != '#')
            {
                cat[d.x][d.y] = 1;
                q.push(d);
            }
        }
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        memset(cat, 0, sizeof(cat));
        cin >> n >> m;
        int a, b;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> gra[i][j];
                if (gra[i][j] == 'A')
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

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 12ms
Take Memory: 752KB
Submit time: 2019-01-06 20:59:46
****************************************************/