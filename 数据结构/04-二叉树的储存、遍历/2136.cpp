// K [2136] - 数据结构实验之二叉树的建立与遍历
#include <bits/stdc++.h>
using namespace std;
struct tree {
    char data;
    tree *l, *r;
};
int cnt, ans;
char s1[100];  // s1先序 s2中序 ans为后序*/
tree *creat(tree *root) {
    if (s1[cnt] == ',') {
        cnt++;
        return NULL;
    } else {
        root = new tree;
        root->data = s1[cnt++];
        root->l = creat(root->l);
        root->r = creat(root->r);
        return root;
    }
}
void show_mid(tree *root) {
    if (root) {
        show_mid(root->l);
        cout << root->data;
        show_mid(root->r);
    }
}
void show_back(tree *root) {
    if (root) {
        show_back(root->l);
        show_back(root->r);
        cout << root->data;
    }
}
void leaves(tree *root) {
    if (root) {
        if (root->l == NULL && root->r == NULL) ans++;
        leaves(root->l);
        leaves(root->r);
    }
}
int height(tree *root) {
    if (root) {
        int l = height(root->l);
        int r = height(root->r);
        return (l > r) ? l + 1 : r + 1;
    } else
        return 0;
}
int main() {
    tree *root;
    scanf("%s", s1);
    cnt = ans = 0;
    root = creat(root);
    show_mid(root);
    cout << endl;
    show_back(root);
    cout << endl;
    leaves(root);
    cout << ans << endl;
    cout << height(root) << endl;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 196KB
Submit time: 2018-12-13 22:59:31
****************************************************/