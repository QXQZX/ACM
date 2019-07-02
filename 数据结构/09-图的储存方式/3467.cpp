#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data; // 存点的j 
    node *next;
};
int main()
{
    ios::sync_with_stdio(false);
    node *p, *gra[5005];
    int n, a, b, t;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
            gra[i] = NULL;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a;
                if (a == 1)
                {
                    if (gra[i] == NULL)
                    {
                        gra[i] = new node;
                        gra[i]->data = j;
                        gra[i]->next = NULL;
                    }
                    else
                    {
                        p = new node;
                        p->next = gra[i]->next;
                        p->data = j;
                        gra[i]->next = p;
                    }
                }
            }
        }
        cin >> t;
        while (t--)
        {
            cin >> a >> b;
            int flag = 0;
            p = gra[a];
            while (p)
            {
                if (p->data == b)
                {
                    flag = 1;
                    break;
                }
                p = p->next;
            }
            if (flag)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            // if (gra[a] == NULL)
            //     cout << "No" << endl;
            // else
            // {
            //     p = gra[a];
            //     while (p)
            //     {
            //         if (p->data == b)
            //         {
            //             flag = 1;
            //             break;
            //         }
            //         p = p->next;
            //     }
            //     if (flag == 1)
            //         cout << "Yes" << endl;
            //     else
            //         cout << "No" << endl;
            // }
        }
    }
    return 0;
}
