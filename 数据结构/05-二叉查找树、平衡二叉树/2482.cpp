// B [2482] - 二叉排序树
#include <bits/stdc++.h>
using namespace std;
char str[15], s1[15], s2[15];
int flag;
struct tree {
    int data;
    tree *l, *r;
};
void insert(tree *&t, int k) {
    if (t == NULL) {
        t = new tree;
        t->data = k;
        t->l = NULL;
        t->r = NULL;
        return;
    }
    if (k <= t->data)
        insert(t->l, k);
    else
        insert(t->r, k);
}
void make(tree *t)  // 构建完平衡二叉树之后 的先序遍历结果就是原序列
{
    if (t) {
        str[flag++] = t->data + '0';
        make(t->l);
        make(t->r);
    }
}
int main() {
    int n, k;
    tree *t;
    while (cin >> n && n) {
        t = NULL;
        cin >> s1;
        int len = strlen(s1);
        for (int i = 0; i < len; i++) {
            k = s1[i] - '0';
            insert(t, k);
        }
        flag = 0;
        make(t);
        for (int i = 0; i < n; i++) {
            flag = 1;
            cin >> s2;
            for (int j = 0; j < len; j++) {
                if (str[j] != s2[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 192KB
Submit time: 2018-12-16 13:11:15
****************************************************/