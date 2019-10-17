// L [3340] - 数据结构实验之二叉树一：树的同构
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;
struct tree  // 利用静态数组
{
    char data;
    int l;
    int r;
} t1[150], t2[150];

//下面来判断是否为同构
//都为空树，直接返回1；一个空一个不空，直接返回0
//都不空：结点value不同，直接0；结点相同，再看子树
//左子树同不存在，就递归调用右子树
//左子树存在，看是否相等，不相等就交换左右子树，再递归调用

int isok(int a, int b) {
    if (a == -1 && b == -1)
        return 1;
    else if ((a == -1 && b != -1) || (a != -1 && b == -1))
        return 0;
    else if (t1[a].data != t2[b].data)
        return 0;
    else if (t1[a].l == -1 && t2[b].l == -1)
        return isok(t1[a].r, t2[b].r);
    else if (t1[a].l != -1 && t2[b].l != -1 &&
             t1[t1[a].l].data == t2[t2[b].l].data)
        return (isok(t1[a].l, t2[b].l) && isok(t1[a].r, t2[b].r));
    else
        return (isok(t1[a].l, t2[b].r) && isok(t1[a].r, t2[b].l));
}
int buildtree(tree tree[], int n) {
    int root = -1;  // 不初始化会re
    char l, r;
    if (n) {
        int check[150] = {0};
        for (int i = 0; i < n; i++) {
            cin >> tree[i].data >> l >> r;
            if (l != '-') {
                tree[i].l = l - '0';
                check[tree[i].l] = 1;
            } else
                tree[i].l = -1;
            if (r != '-') {
                tree[i].r = r - '0';
                check[tree[i].r] = 1;
            } else
                tree[i].r = -1;
        }
        for (int i = 0; i < n; i++) {
            if (!check[i]) {
                root = i;
                break;
            }
        }
    }
    return root;
}
int main() {
    int n, m;
    while (cin >> n) {
        int a, b;
        a = buildtree(t1, n);
        cin >> m;
        b = buildtree(t2, m);
        if (isok(a, b) == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 200KB
Submit time: 2018-12-15 13:45:09
****************************************************/