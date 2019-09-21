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

node *create(int n) {
    node *head, *p, *tail;
    head = new node;
    head->next = NULL;
    tail = head;
    for (int i = 0; i < n; i++) {
        p = new node;
        cin >> p->data;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    return head;
}
void sort(node *head, int n) {
    for (node *p = head->next; p != NULL; p = p->next) {
        for (node *q = p->next; q != NULL; q = q->next) {
            if (p->data > q->data) {
                swap(p->data, q->data);
            }
        }
    }
}

void show(node *head, int n) {
    node *p = head->next;
    while (p) {
        if (p->next == NULL) {
            cout << p->data << endl;
        } else {
            cout << p->data << " ";
        }
        p = p->next;
    }
}
int main() {
    int n;
    node *p, *tail, *head;

    cin >> n;
    head = create(n);

    sort(head, n);

    show(head, n);
    return 0;
}
