#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *creat(int n);                 //创建链表
struct node *exchange(struct node *head1); //转置链表
int delete (struct node *head, int m);     //删除重复元素
struct node *output(struct node *head3);   //输出链表
int main()
{
    int m, n;
    struct node *p, *head1, *head2;
    scanf("%d", &m);

    head1 = creat(m);
    printf("%d\n", m);
    exchange(head1);

    output(head1);
    n = delete (head1, m);
    printf("%d\n", n);
    output(head1);
    return 0;
}
struct node *creat(int n) //创建链表
{
    struct node *head, *tail, *p;
    int i;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    tail = head;
    for (i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        tail->next = p;
        p->next = NULL;
        tail = p;
    }
    return head;
}
struct node *exchange(struct node *head1) //逆转链表
{
    struct node *p, *q;
    p = head1->next;
    head1->next = NULL;
    q = p->next;
    while (p)
    {
        p->next = head1->next;
        head1->next = p;
        p = q;
        if (q)
            q = q->next;
    }
    return head1;
}
int delete (struct node *head, int m) //删除重复元素
{
    struct node *p, *q, *s;
    p = head->next;
    while (p)
    {
        q = p->next;
        s = p;
        while (q)
        {
            if (q->data == p->data)
            {
                s->next = q->next;

                q = s->next;
                m--;
            }
            else
            {
                s = q;
                q = q->next;
            }
        }
        p = p->next;
    }
    return m;
}
struct node *output(struct node *head3) //输出链表
{
    struct node *p;
    p = head3->next;
    while (p != NULL)
    {
        if (p->next == NULL)
            printf("%d\n", p->data);
        else
            printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}