// H [3343] - 数据结构实验之二叉树四：（先序中序）还原二叉树
#include <bits/stdc++.h>
using namespace std;
struct tree {
    char c;
    tree *l, *r;
};
int cnt;
char s1[100], s2[100], ans[100];         // s1先序 s2中序 ans为后序*/
tree *make(int len, char *s1, char *s2)  // 根据前序 中序建立二叉树
{
    int i;
    tree *root;
    if (len <= 0)  // 递归边界 如果len为0则不能建树
        return NULL;
    root = new tree;  // new一个新节点
    root->c = s1[0];
    for (i = 0; i < len; i++) {
        if (s2[i] == s1[0])  // 在中序中寻找根节点
            break;
    }
    root->l = make(i, s1 + 1, s2);  // 递归建立左子树
    root->r = make(len - i - 1, s1 + i + 1, s2 + i + 1);  // 递归建立右子树
    return root;
}
int height(tree *root)  // 求二叉树的高度 递归实现
{
    if (root) {
        int leftcnt = height(root->l);
        int rightcnt = height(root->r);
        return (leftcnt > rightcnt) ? leftcnt + 1 : rightcnt + 1;
    } else
        return 0;
}
int main() {
    int n;
    while (cin >> n) {
        cnt = 0;
        tree *tree;
        cin >> s1 >> s2;         // 输入先序和中序
        tree = make(n, s1, s2);  // 还原二叉树
        cout << height(tree) << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 152KB
Submit time: 2018-12-13 17:14:21
****************************************************/