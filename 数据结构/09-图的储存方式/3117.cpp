/*基于邻接链表*/
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
int main()
{
    ios::sync_with_stdio(false);
    node *p, *q, *book[500001];
    int a, b, n, m, t;
    while (cin >> n >> m)
    {
        // memset(book, NULL, sizeof(book));
        for (int i = 0; i < n; i++)
            book[i] = NULL;
        // 构建邻接链表
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            if (book[a] == NULL)
            {
                book[a] = new node;
                book[a]->data = b;
                book[a]->next = NULL;
            }
            else
            {
                q = book[a]->next;
                p = new node;
                p->data = b;
                p->next = q;
                book[a]->next = p;
            }
        }
        cin >> t;
        while (t--)
        {
            cin >> a >> b;
            int flag = 0;
            if (book[a] == NULL)
                cout << "No" << endl;
            else
            {
                p = book[a];
                while (p)
                {
                    if (p->data == b)
                    {
                        flag = 1;
                        break;
                    }
                    p = p->next;
                }
                if (flag == 1)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
        }
    }
    return 0;
}