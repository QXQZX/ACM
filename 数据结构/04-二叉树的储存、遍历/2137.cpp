// F [2137] - 数据结构实验之求二叉树后序遍历和层次遍历
#include <bits/stdc++.h>
using namespace std;
struct tree {
    char c;
    tree *l, *r;
};
int cnt;
char s1[100], s2[100], ans[100];  // s1先序 s2中序 ans为后序
void tree_front(int len, char *s1, char *s2, char *ans) {
    int i;
    if (len <= 0) return;
    for (i = 0; i < len; i++) {
        if (s2[i] == s1[0]) break;
    }
    tree_front(i, s1 + 1, s2, ans);
    tree_front(len - i - 1, s1 + i + 1, s2 + i + 1, ans + i);
    ans[len - 1] = s1[0];
}
tree *make(int len, char *s1, char *s2) /* 根据前序中序建立二叉树*/
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
void show(tree *root)  // 层序遍历二叉树 // 通过队列实现
{
    queue<tree *> q;
    if (root)  // 数存在入队
        q.push(root);
    while (!q.empty()) {
        root = q.front();
        q.pop();
        if (root) {
            cout << root->c;
            q.push(root->l);
            q.push(root->r);
        }
    }
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        cnt = 0;
        tree *tree;
        cin >> s1 >> s2;
        int len = strlen(s1);
        tree_front(len, s1, s2, ans);
        ans[len] = '\0';
        cout << ans << endl;
        tree = make(len, s1, s2);
        show(tree);
        cout << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 156KB
Submit time: 2018-12-13 12:56:57
****************************************************/