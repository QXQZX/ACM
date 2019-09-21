#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *creat(int n); //创建链表
struct node *merge(struct node *head1, struct node *head2, struct node *head3); //归并链表
struct node *output(struct node *head3); //输出链表
int main()
{
    int m, n;
    struct node *p, *head1, *head2, *head3, *q1, *q2;
    scanf("%d %d", &m, &n);
    head3 = (struct node *)malloc(sizeof(struct node));
    head3->next = NULL;

    head1 = creat(m);
    head2 = creat(n);
    q1 = head1->next;
    q2 = head2->next;
    merge(q1, q2, head3);
    output(head3);
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
struct node *merge(struct node *head1, struct node *head2, struct node *head3) //归并链表
{
    struct node *tail;
    tail = head3;
    while (head1 && head2)
    {
        if (head1->data > head2->data)
        {
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
        else
        {
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
    }
    if (head1)
        tail->next = head1;
    if (head2)
        tail->next = head2;

    return head3;
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
    free(head3);
    return 0;
}