#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    int wi;
    int pi;
};
bool cmp(node a, node b) {
    if (a.wi < b.wi)
        return true;
    else if (a.wi == b.wi) {
        if (a.pi > b.pi)
            return true;
        else
            return false;
    }
    return false;
}
int main() {
    int n, m, i, j;
    node temp, a[10001];
    while (~scanf("%d %d", &n, &m)) {
        for (i = 0; i < n; i++) scanf("%d %d", &a[i].wi, &a[i].pi);
        sort(a, a + n, cmp);
        int cnt = 0;
        i = 0;
        while (m--) {
            cnt += a[i].pi;
            i++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
