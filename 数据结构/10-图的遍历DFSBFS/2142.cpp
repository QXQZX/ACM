/*数据结构实验之图论一
*
*基于邻接链表的广度优先搜索遍历
*/
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *p, *a[1111];
int ans[111], cat[1111];
int k, m, t, cnt;

void bfs(int i);

int main()
{
    int n, u, v;
    cin >> n;
    while (n--)
    {
        memset(cat, 0, sizeof(cat));
        cin >> k >> m >> t;
        for (int i = 0; i < k; i++) // 开辟k个点
        {
            a[i] = new node;
            a[i]->next = NULL;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            p = new node;
            p->data = v;
            p->next = a[u]->next;
            a[u]->next = p;

            p = new node;
            p->data = u;
            p->next = a[v]->next;
            a[v]->next = p;
        }
        cnt = 0;
        bfs(t);
        for (int i = 0; i < cnt; i++)
        {
            if (i == cnt - 1)
                cout << ans[i] << endl;
            else
                cout << ans[i] << ' ';
        }
    }
    return 0;
}
void bfs(int i)
{
    for (int j = 0; j < k; j++)
    {
        for (node *t = a[j]->next; t; t = t->next)
        {
            for (node *q = t->next; q; q = q->next)
            {
                if (t->data > q->data)
                    swap(t->data, q->data);
            }
        }
    }
    queue<int> Q;
    Q.push(i);
    ans[cnt++] = i;
    cat[i] = 1;

    while (!Q.empty())
    {
        int num = Q.front();
        Q.pop();
        for (p = a[num]->next; p; p = p->next)
        {
            if (cat[p->data] == 0)
            {
                cat[p->data] = 1;
                Q.push(p->data);
                ans[cnt++] = p->data;
            }
        }
    }
}
/*
#include<queue>
#include<vector>
#include<stdio.h>
#include<string.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> >head[100];
queue<int>q;
bool vis[110];
int flag;
void bfs()
{
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        if(flag == 0)
        {
            printf("%d",cur);
            flag = 1;
        }
        else printf(" %d",cur);
        while(!head[cur].empty())
        {
            int tmp = head[cur].top();
            if(!vis[tmp])
            {
                q.push(tmp);
                vis[tmp] = 1;
            }
            head[cur].pop();
        }
    }
    printf("\n");
}

int main()
{
    int t, n, m, k, u, v;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &n, &m, &k);
        memset(vis, 0, sizeof(vis));
        for(int i = 0; i < n; i++)
            while(!head[i].empty())
                head[i].pop();
        while(m--)
        {
            scanf("%d %d", &u, &v);
            head[u].push(v);
            head[v].push(u);
        }
        while(!q.empty())q.pop();
        q.push(k);
        vis[k] = 1;
        flag = 0;
        bfs();
    }
    return 0;
}*/