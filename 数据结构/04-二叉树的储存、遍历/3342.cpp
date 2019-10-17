// G [3342] - 数据结构实验之二叉树三：统计叶子数
#include <bits/stdc++.h>
using namespace std;
struct tree {
    char c;
    tree *l, *r;
};
int cnt, ans;
char s[100]; /*s1[100], s2[100], ans[100]; // s1先序 s2中序 ans为后序*/
tree *creat(tree *root)  // 构建二叉树
{
    if (s[cnt] == ',') {
        cnt++;
        return NULL;
    }
    root = new tree;
    root->c = s[cnt++];
    root->l = creat(root->l);
    root->r = creat(root->r);
    return root;
}
void count(tree *root) {
    if (root) {
        if (root->l == NULL && root->r == NULL) {
            ans++;
        }
        count(root->l);
        count(root->r);
    }
}
int main() {
    while (cin >> s) {
        tree *tree;
        cnt = ans = 0;
        tree = creat(tree);
        count(tree);
        cout << ans << endl;
    }
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 212KB
Submit time: 2018-12-13 16:56:27
****************************************************/