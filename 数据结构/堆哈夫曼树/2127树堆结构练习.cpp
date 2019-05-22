#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> q; // 升序的优先队列
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        q.push(num);
    }
    int ans = 0;
    while (!q.empty())
    {
        int a = q.top();
        q.pop();
        if (!q.empty())
        {
            int b = q.top();
            q.pop();
            ans += a + b;
            q.push(a + b);
        }
    }
    cout << ans << endl;
    return 0;
}
/*#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;

struct N
{
    int data;
    N *l, *r;
};

struct N *creat()
{
    N *p = (N *)malloc(sizeof(N));
    p->l = p->r = NULL;
    return p;
}

void insert(N *&root, int data)
{
    if (root == NULL)
    {
        root = creat();
        root->data = data;
    }
    else if (data >= root->data)
    {
        insert(root->r, data);
    }
    else
    {
        insert(root->l, data);
    }
}

int check(N *&root)
{
    if (root->l == NULL)
    {
        int t = root->data;
        root = root->r;
        return t;
    }
    else
        return check(root->l);
}

int main()
{
    int n, t, i, sum = 0;
    cin >> n;
    N *root = NULL;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        insert(root, t);
    }

    int a, b;

    for (i = 1; i < n; i++)
    {
        a = check(root);
        b = check(root);
        sum += a + b;
        insert(root, a + b);
    }

    cout << sum << endl;

    return 0;
}
*/