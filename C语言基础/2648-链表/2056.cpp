#include <iostream>
#include <cstdio>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *create(int n);
void Delete(node *head, int n);
int main()
{
    int n;
    node *head;
    while (~scanf("%d", &n) && n)
    {
        head = create(n);
        Delete(head, n);
    }
    return 0;
}
node *create(int n)
{
    node *head, *tail, *p;
    head = new node;
    head->next = NULL;
    head->data = 1;
    tail = head;
    for (int i = 2; i <= n; i++)
    {
        p = new node;
        p->data = i;
        tail->next = p;
        p->next = NULL;
        tail = p;
    }
    tail->next = head;
    return head;
}
void Delete(node *head, int n)
{
    node *p, *q;
    int i = 0, cnt = 0;
    q = head->next;
    while (q->next != head)
        q = q->next;
    while (i < n)
    {
        p = q->next;
        cnt++;
        if (cnt % 5 == 0)
        {
            i++;
            if (p->data == 1)
            {
                cout << i << endl;
                break;
            }
            else
                q->next = p->next;
        }
        else
            q = q->next;
    }
}