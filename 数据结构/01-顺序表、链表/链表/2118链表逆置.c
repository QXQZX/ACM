#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    struct node *head, *p, *q, *tail;
    head = (struct node *)malloc(sizeof(struct node));
    q = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    tail = head;
    while (1) {
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        if (p->data == -1) break;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    //链表倒置
    p = head->next;
    head->next = NULL;
    q = p->next;
    while (p != NULL) {
        p->next = head->next;
        head->next = p;
        p = q;
        if (q != NULL) q = q->next;
    }
    //输出转置完成的链表
    p = head->next;
    while (p != NULL) {
        if (p->next == NULL)
            printf("%d\n", p->data);
        else
            printf("%d ", p->data);
        p = p->next;
    }
    free(head);
    free(p);
    free(q);
    return 0;
}