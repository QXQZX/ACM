// A [2128] - 树结构练习——排序二叉树的中序遍历
#include <bits/stdc++.h>
using namespace std;
struct tree {
    int data;
    tree *l, *r;
};
int flag;
void insert(tree *&t, int k)  // 插入构建排序二叉树 tree *&t是传入t的地址
{
    if (t == NULL) {
        t = new tree;
        t->data = k;
        t->l = NULL;
        t->r = NULL;
        return;
    }
    if (k < t->data)
        insert(t->l, k);
    else  // 等于节点的情况 插在右子树
        insert(t->r, k);
}
void show_mid(tree *t) {
    if (t != NULL) {
        show_mid(t->l);
        if (flag) {
            cout << t->data;
            flag = 0;
        } else
            cout << " " << t->data;
        show_mid(t->r);
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
        show_mid(t);
        cout << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 208KB
Submit time: 2018-12-14 18:56:12
****************************************************/