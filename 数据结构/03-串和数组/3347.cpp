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
struct node {
    int l;
    int r;
    int data;
};
bool comp(node a, node b) { return a.l < b.l; }
int main() {
    int n, m, t;
    node p[55];
    while (cin >> n >> m >> t) {
        for (int i = 1; i <= t; i++) {
            scanf("%d %d %d", &p[i].l, &p[i].r, &p[i].data);
            swap(p[i].l, p[i].r);
        }
        sort(p + 1, p + t + 1, comp);
        for (int i = 1; i <= t; i++) {
            cout << p[i].l << ' ' << p[i].r << ' ' << p[i].data << endl;
        }
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 156KB
Submit time: 2018-12-05 19:08:02
****************************************************/