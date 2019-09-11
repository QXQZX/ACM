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
int head1_cnt, head2_cnt;

// void add(int num, node *head);
void print(node *head);  //打印
void make()              //  拆分
{
    node *p, *tail1, *tail2;
    head1 = new node;
    head2 = new node;
    head1->next = NULL;
    head2->next = NULL;

    p = head->next;
    tail1 = head1;
    tail2 = head2;

    while (p) {
        if (p->data % 2 == 0) {
            tail1->next = p;
            tail1 = p;
            p = p->next;
            tail1->next = NULL;
            head1_cnt++;
        } else {
            tail2->next = p;
            tail2 = p;
            p = p->next;
            tail2->next = NULL;
            head2_cnt++;
        }
    }
}

int main() {
    int n, num;
    node *tail, *p;
    head = new node;
    head->next = NULL;
    tail = head;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        p = new node;
        p->data = num;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    head1_cnt = 0;
    head2_cnt = 0;

    make();

    cout << head1_cnt << " " << head2_cnt << endl;

    print(head1);
    print(head2);
    return 0;
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