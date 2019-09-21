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
    node *left, *right;
};

int n, m, num;
node *head;
void input();  // 输入
void query();  // 查询

int main() {
    head = new node;
    cin >> n >> m;
    input();
    query();

    return 0;
}

void input() {
    node *tail, *p;
    head = new node;
    head->right = NULL;
    head->left = NULL;
    tail = head;

    for (int i = 0; i < n; i++) {
        cin >> num;
        p = new node;
        p->data = num;
        p->right = NULL;
        p->left = tail;
        tail->right = p;
        tail = p;
    }
}

void query() {
    node *p;

    while (m--) {
        cin >> num;
        p = head->right;
        while (p) {
            if (p->data == num) {
                if (p->left != head && p->right)
                    cout << p->left->data << ' ' << p->right->data << endl;
                else if (p->left == head && p->right)
                    cout << p->right->data << endl;
                else if (p->left != head && !p->right)
                    cout << p->left->data << endl;
            }
            p = p->right;
        }
    }
}
