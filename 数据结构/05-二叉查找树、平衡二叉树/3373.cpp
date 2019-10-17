// C [3373] - 数据结构实验之查找一：二叉排序树
#include <bits/stdc++.h>
using namespace std;  // 构建二叉树之后判断两个序列的前序遍历是否相同
struct tree {
    char data;
    tree *l;
    tree *r;
};
int cnt, s1[15], s2[15];
void insert(tree *&t, int num) {
    if (t == NULL) {
        t = new tree;
        t->data = num;
        t->l = NULL;
        t->r = NULL;
        return;
    }
    if (num > t->data)
        insert(t->r, num);
    else
        insert(t->l, num);
}
void make1(tree *root) {
    if (root) {
        s1[cnt++] = root->data;
        make1(root->l);
        make1(root->r);
    }
}
void make2(tree *root) {
    if (root) {
        s2[cnt++] = root->data;
        make2(root->l);
        make2(root->r);
    }
}
int main() {
    int num, n, m;
    while (cin >> n >> m && n) {
        tree *t1;
        t1 = NULL;
        for (int i = 0; i < n; i++) {
            cin >> num;
            insert(t1, num);
        }
        memset(s1, 0, sizeof(s1));
        cnt = 0;
        make1(t1);
        while (m--) {
            tree *t2;
            t2 = NULL;
            for (int i = 0; i < n; i++) {
                cin >> num;
                insert(t2, num);
            }
            memset(s2, 0, sizeof(s2));
            cnt = 0;
            make2(t2);
            int flag = 1;
            for (int i = 0; i < n; i++) {
                if (s1[i] != s2[i]) {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 208KB
Submit time: 2018-12-18 12:20:33
****************************************************/