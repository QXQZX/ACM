#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

using namespace std;
struct node {
    int data;
    node *next;
};

node *head, *head1, *head2;

void print(node *head);        // 打印链表
void init(node *head, int n);  // 构造链表
void make()                    // 归并链表
{
    node *tail, *p1, *p2;
    head = new node;
    head->next = NULL;
    tail = head;
    p1 = head1->next;
    p2 = head2->next;

    while (p1 && p2) {
        if (p1->data < p2->data) {
            tail->next = p1;
            tail = p1;
            p1 = p1->next;
        } else {
            tail->next = p2;
            tail = p2;
            p2 = p2->next;
        }
    }

    tail->next = (p1 == NULL) ? p2 : p1;
}

int main() {
    int n, m;
    cin >> n >> m;
    head1 = new node;
    init(head1, n);
    head2 = new node;
    init(head2, m);

    make();  //归并
    print(head);
    return 0;
}
void init(node *head, int n) {
    int num;
    node *tail, *p;
    head->next = NULL;
    tail = head;

    for (int i = 0; i < n; i++) {
        cin >> num;
        p = new node;
        p->data = num;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
}
void print(node *head) {
    node *p;
    p = head->next;
    while (p) {
        if (p->next == NULL)
            cout << p->data << endl;
        else
            cout << p->data << " ";
        p = p->next;
    }
}