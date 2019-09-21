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
    int a, b;
    node *next;
};

int n;
int main() {
    cin >> n;
    node *head, *p, *q, *t;
    head = new node;
    head->next = NULL;
    // 初始化结点1
    p = new node;
    p->a = 0;
    p->b = 1;
    p->next = NULL;
    // 初始化结点2
    q = new node;
    q->a = 1;
    q->b = 1;
    q->next = NULL;
    // 结点连接
    head->next = p;
    p->next = q;
    // 遍历2--n级
    for (int i = 2; i <= n; i++) {
        p = head->next;
        while (p->next) {
            t = p->next;
            if (p->b + t->b <= n) {
                q = new node;
                q->b = p->b + t->b;
                q->a = p->a + t->a;
                q->next = NULL;

                p->next = q;
                q->next = t;
            }

            p = p->next;
        }
    }

    int cnt = 0;
    p = head->next;
    while (p) {
        cnt++;
        if (p == head->next) {
            printf("%d/%d\t", p->a, p->b);
        } else {
            if (cnt % 10 == 0 || p->next == NULL) {
                printf("%d/%d\n", p->a, p->b);
            } else {
                printf("%d/%d\t", p->a, p->b);
            }
        }

        p = p->next;
    }

    return 0;
}