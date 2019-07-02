#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, y, step; // x,y 分别表示 a,b连个桶的水的体积  step步数
};
int a, b, c;
int cat[111][111];
void bfs()
{
    queue<node> q;
    node p = {0, 0, 0};
    q.push(p);
    while (!q.empty())
    {
        node t = q.front();
        q.pop();
        if (t.x == c || t.y == c) // 搜索边界
        {
            cout << t.step << endl;
            return;
        }
        for (int i = 0; i < 6; i++)
        {
            node tt;
            if (i == 0) // 倒满a
            {
                tt.x = a;
                tt.y = t.y;
            }
            else if (i == 1) // 倒满b
            {
                tt.x = t.x;
                tt.y = b;
            }
            else if (i == 2) // 倒空a
            {
                tt.x = 0;
                tt.y = t.y;
            }
            else if (i == 3) // 倒空b
            {
                tt.x = t.x;
                tt.y = 0;
            }
            else if (i == 4) // b倒向a
            {
                tt.x = t.x + t.y;
                if (tt.x > a) // 倒不下
                {
                    tt.y = tt.x - a;
                    tt.x = a;
                }
                else
                    tt.y = 0;
            }
            else if (i == 5) // a倒向b
            {
                tt.y = t.x + t.y;
                if (tt.y > b) // 倒不下
                {
                    tt.x = tt.y - b;
                    tt.y = b;
                }
                else
                    tt.x = 0;
            }
            if (!cat[tt.x][tt.y])
            {
                cat[tt.x][tt.y] = 1;
                tt.step = t.step + 1;
                q.push(tt);
            }
        }
    }
    cout << "impossible" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    while (cin >> a >> b >> c)
    {
        memset(cat, 0, sizeof(cat));
        bfs();
    }
    return 0;
}