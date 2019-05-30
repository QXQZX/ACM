#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *creat(int n);                                                      //创建链表
struct node *spilt(struct node *head0, struct node *head1, struct node *head2); //拆分链表
struct node *output(struct node *head3);                                        //输出链表
int main()
{
    int N, m = 0, n = 0;
    struct node *p, *head0, *head1, *head2;
    scanf("%d", &N);
    head1 = (struct node *)malloc(sizeof(struct node));
    head2 = (struct node *)malloc(sizeof(struct node));
    head0 = creat(N);
    p = head0->next;
    while (p != NULL)
    {
        if (p->data % 2 == 0)
            m++;
        else
            n++;
        p = p->next;
    }
    printf("%d %d\n", m, n);
    spilt(head0, head1, head2);
    output(head1);
    output(head2);
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
struct node *spilt(struct node *head0, struct node *head1, struct node *head2) //拆分链表
{
    struct node *p, *tail1, *tail2, *p1, *p2;
    p = head0->next;

    head1->next = NULL;
    head2->next = NULL;
    tail1 = head1;
    tail2 = head2;

    while (p != NULL)
    {
        if ((p->data % 2) == 0)
        {
            p1 = (struct node *)malloc(sizeof(struct node));
            p1->data = p->data;
            p1->next = NULL;
            tail1->next = p1;
            tail1 = p1;
        }
        else
        {
            p2 = (struct node *)malloc(sizeof(struct node));
            p2->data = p->data;
            p2->next = NULL;
            tail1->next = p2;
            tail2 = p2;
        }
        p = p->next;
    }
    return 0;
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