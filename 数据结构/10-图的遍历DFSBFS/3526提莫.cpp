#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, y, step;
};
int gra[111][111];
int cat[111][111];
int n, m, k;
// 方向数组
int goton[4] = {-1, 1, 0, 0}; // 控制上下
int gotom[4] = {0, 0, -1, 1}; // 控制左右
// int go[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
void bfs(int x, int y);

int main()
{
    ios::sync_with_stdio(false);
    while (cin >> n >> m >> k)
    {
        memset(cat, 0, sizeof(cat));
        memset(gra, 0, sizeof(gra));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> gra[i][j];
        }
        int a, b;
        cin >> a >> b;
        bfs(a, b);
    }
    return 0;
}
void bfs(int x, int y)
{
    cat[x][y] = 1;
    node p = {x, y, 1};
    queue<node> q;
    q.push(p);
    while (!q.empty())
    {
        node temp = q.front();
        q.pop();
        if (temp.step == k)
        {
            cout << "Teemo: " << temp.x << ' ' << temp.y << endl;
            return;
        }
        int mmax = 0;
        for (int i = 0; i < 4; i++)
        {
            int n = temp.x + goton[i];
            int m = temp.y + gotom[i];
            mmax = max(mmax, gra[n][m]); // 找出四个方向 中最大的  数
            // mmax = max(mmax, gra[temp.x + goton[i]][temp.y + gotom[i]]);
        }
        node t;
        int flag = 0;
        for (int i = 0; i < 4; i++) // 将上面找出的数 若符合条件  入栈
        {
            t.x = temp.x + goton[i];
            t.y = temp.y + gotom[i];
            t.step = temp.step + 1;
            if (t.x > 0 && t.x <= n && t.y > 0 && t.y <= m && !cat[t.x][t.y] && gra[t.x][t.y] == mmax)
            {
                flag = 1;
                q.push(t);
                cat[t.x][t.y] = 1;
            }
        }
        if (!flag) // flag 标记 上次没有入栈的 说明无路可走 输出BOOM 返回
        {
            cout << "BOOM" << endl;
            return;
        }
    }
    cout << "BOOM" << endl; // 遍历完  还没有放完 BOOM
}