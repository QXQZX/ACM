//此题不用用c只能c++  大水题
#include <iostream>
#include <cstdlib>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *creat(int n);                   //创建链表(比较特殊，不能直接搬用前面的创建链表函数)
int select(node *head, int m, int n); //选出被杀的人
int main()
{
    int m, n;
    node *head;
    cin >> n >> m;
    head = creat(n);
    cout << select(head, n, m) << endl;
    return 0;
}
node *creat(int n) //创建链表(比较特殊，不能直接搬用前面的创建链表函数)
{
    node *head, *tail, *p;
    int i;
    head = (node *)malloc(sizeof(node));
    head->data = 1;
    head->next = NULL;
    tail = head;
    for (i = 2; i <= n; i++)
    {
        p = (node *)malloc(sizeof(node));
        p->data = i;
        tail->next = p;
        p->next = NULL;
        tail = p;
    }
    tail->next = head;
    return head;
}
int select(node *head, int n, int m) //杀人函数
{
    int num = 0, cnt = 0;
    node *p, *q;
    q = head;
    while (q->next != head) //使q指向为尾节点
    {
        q = q->next;
    }
    while (cnt < n - 1) //保留两个结点因为一个为空
    {
        p = q->next;
        num++;
        if (num % m == 0) //杀人
        {
            q->next = p->next;
            free(p);
            cnt++;
        }
        else
            q = p;
    }
    return q->data;
}