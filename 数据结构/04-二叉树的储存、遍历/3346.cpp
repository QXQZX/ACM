// I [3346] - 数据结构实验之二叉树七：叶子问题
#include <bits/stdc++.h>
using namespace std;
struct tree {
    char c;
    tree *l, *r;
};
int cnt;
char s1[100], s2[100], ans[100];  // s1先序 s2中序 ans为后序*/
tree *creat(tree *root)           // 构建二叉树
{
    if (s1[cnt] == ',') {
        cnt++;
        return NULL;
    }
    root = new tree;
    root->c = s1[cnt++];
    root->l = creat(root->l);
    root->r = creat(root->r);
    return root;
}
void print_leaves(tree *root)  // 输出二叉树的子叶
{  // 层序遍历原理 从上到下从做到右 正好能按相应的的顺序输出 子叶
    queue<tree *> q;
    if (root) q.push(root);
    while (!q.empty()) {
        root = q.front();  //访问队首元素
        q.pop();           //删除队首
        if (root) {
            if (root->l == NULL && root->r == NULL) cout << root->c;
            q.push(root->l);  // 左子树进入队列
            q.push(root->r);  // 右子树进入队列
        }
    }
}
int main() {
    while (cin >> s1) {
        cnt = 0;
        tree *tree;
        int n = strlen(s1);
        tree = creat(tree);  // 还原二叉树
        print_leaves(tree);
        cout << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 200KB
Submit time: 2018-12-13 18:35:34
****************************************************/