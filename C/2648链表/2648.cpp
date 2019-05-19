#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct node
{
    int data;
    node *next;
};
int len;
node *head;
void insert(int m, int n); //插入链表
void output();             //输出链表
int main()
{
    int t, m, n;
    while (scanf("%d", &t) != EOF)
    {
        head = new node;
        len = 0;
        while (t--)
        {
            cin >> m >> n;
            insert(m, n);
        }
        output();
    }
    return 0;
}
void insert(int m, int n)
{
    int i;
    node *p, *q;
    p = head;
    for (i = 0; i < m && i < len; i++)
    {
        p = p->next;
    }
    q = new node;
    q->data = n;
    q->next = p->next;
    p->next = q;
    len++;
}
void output() //输出链表
{
    node *p;
    p = head->next;
    while (p != NULL)
    {
        if (p->next == NULL)
            cout << p->data << endl;
        else
            cout << p->data << ' ';
        p = p->next;
    }
}