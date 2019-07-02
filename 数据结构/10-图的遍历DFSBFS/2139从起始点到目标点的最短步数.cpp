#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data; // 存点的编号
    int step; // 存步数
} node;
int gra[1001][1001];
int cat[1001];
int n, m;
void bfs(int i)
{
    queue<node> q;
    node p;     // 用结构体来存
    p.data = i; // 开始点
    p.step = 0;
    q.push(p);
    cat[i] = 1;
    while (!q.empty())
    {
        node temp = q.front(); // 队首出栈
        q.pop();
        if (temp.data == 1) // 遍历到目的地  返回步数
        {
            cout << temp.step << endl;
            return;
        }
        for (int j = 1; j <= n; j++)
        {
            if (cat[j] == 0 && gra[temp.data][j] == 1)
            {
                node t;
                t.data = j;
                t.step = temp.step + 1; // 下一步 在上一个节点 的基础上 +1
                cat[j] = 1;
                q.push(t); // 入栈
            }
        }
    }
    cout << "NO" << endl;
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
        bfs(n);
    }

    return 0;
}