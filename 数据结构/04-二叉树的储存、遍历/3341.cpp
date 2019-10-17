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
char s[100];
int cnt;
struct node {
    char p;
    node *l, *r;
};
node *newtree() {
    node *tree;
    tree = new node;
    tree->l = tree->r = NULL;
    return tree;
}
node *creattree() {
    node *tree = newtree();
    if (s[cnt++] == ',') return NULL;
    tree->p = s[cnt - 1];
    tree->l = creattree();
    tree->r = creattree();
    return tree;
}
node *show_mid(node *tree) {
    if (tree) {
        show_mid(tree->l);
        cout << tree->p;
        show_mid(tree->r);
    }
}
node *show_back(node *tree) {
    if (tree) {
        show_back(tree->l);
        show_back(tree->r);
        cout << tree->p;
    }
}
int main() {
    while (~scanf("%s", s)) {
        cnt = 0;
        node *tree;
        tree = creattree();
        show_mid(tree);
        cout << endl;
        show_back(tree);
        cout << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 156KB
Submit time: 2018-12-11 16:53:46
****************************************************/