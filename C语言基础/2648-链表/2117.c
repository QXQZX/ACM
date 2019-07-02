#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *p;
    int n, i;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = head->next; //head左移
        head->next = p;
    }
    p = head->next;
    while (p != NULL)
    {
        if (p->next == NULL)
            printf("%d\n", p->data);
        else
            printf("%d ", p->data);
        p = p->next;
    }
    free(head);
    free(p);
    return 0;
}