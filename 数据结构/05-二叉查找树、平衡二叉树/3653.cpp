// D [3653] - 迷失の搜索树
#include <bits/stdc++.h>
using namespace std;
char str[10], s1[100], s2[11];
int flag;
struct tree {
    int data;
    tree *l, *r;
};
void insert(tree *&t, int k) {
    if (t == NULL) {
        t = new tree;
        t->data = k;
        t->l = t->r = NULL;
        return;
    }
    if (k < t->data)
        insert(t->l, k);
    else
        insert(t->r, k);
}
void show_back(tree *t) {
    if (t) {
        show_back(t->l);
        show_back(t->r);
        if (flag) {
            cout << t->data;
            flag = 0;
        } else
            cout << ' ' << t->data;
    }
}
int main() {
    int n, k;
    tree *t;
    while (cin >> n) {
        t = NULL;
        for (int i = 0; i < n; i++) {
            cin >> k;
            insert(t, k);
        }
        flag = 1;
        show_back(t);
        cout << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 12ms
Take Memory: 664KB
Submit time: 2018-12-14 20:59:21
****************************************************/