// D [3344] - 数据结构实验之二叉树五：层序遍历
#include <bits/stdc++.h>
using namespace std;
struct node {
    char data;
    node *l;
    node *r;
};
int i;
char s[1000];
node *creat(node *root) {
    if (s[i] == ',') {
        i++;
        return NULL;
    } else {
        root = new node;
        root->data = s[i++];
        root->l = creat(root->l);
        root->r = creat(root->r);
        return root;
    }
}
void ans(node *root)  // 队列实现
{
    queue<node *> t;
    if (root != NULL) t.push(root);
    while (!t.empty()) {
        root = t.front();
        t.pop();
        if (root) {
            cout << root->data;
            t.push(root->l);
            t.push(root->r);
        }
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        scanf("%s", s);
        i = 0;
        node *tree;
        tree = creat(tree);
        ans(tree);
        cout << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 208KB
Submit time: 2018-12-12 22:24:29
****************************************************/