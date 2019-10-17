// J [2804] - 数据结构实验之二叉树八：（中序后序）求二叉树的深度
#include <bits/stdc++.h>
using namespace std;
struct tree {
    char c;
    tree *l, *r;
};
int cnt;
char s1[100], s2[100], ans[100];  // s1先序 s2中序 ans为后序*/
tree *make(int len, char *s1, char *s2) {
    tree *root;
    if (len <= 0) return NULL;
    root = new tree;
    root->c = s2[len - 1];
    int i;
    // 在先序遍历中寻找根节点
    for (i = 0; i < len; i++) {
        if (s2[len - 1] == s1[i]) break;
    }

    root->l = make(i, s1, s2);
    root->r = make(len - i - 1, s1 + i + 1, s2 + i);
    return root;
}
int h(tree *root) {
    if (root) {
        int left = h(root->l);
        int right = h(root->r);
        return (left > right) ? left + 1 : right + 1;
    } else
        return 0;
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        tree *root;
        scanf("%s %s", s1, s2);
        int len = strlen(s1);
        root = make(len, s1, s2);
        cout << h(root) << endl;
    }
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 156KB
Submit time: 2018-12-13 22:03:59
****************************************************/