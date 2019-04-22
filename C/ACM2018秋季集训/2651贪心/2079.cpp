#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    double wi;
    double pi;
};
bool up(node a, node b) { return a.pi < b.pi; }
int main() {
    int c, j, i, n, m;
    node temp, a[10001];
    scanf("%d", &c);
    while (c--) {
        scanf("%d %d", &n, &m);
        for (i = 0; i < m; i++) {
            scanf("%lf %lf", &a[i].pi, &a[i].wi);
        }
        sort(a, a + m, up);
        double cnt = 0;
        int i;
        for (i = 0; i < m && n - a[i].pi * a[i].wi >= 0; i++) {
            cnt += a[i].wi;
            n -= a[i].pi * a[i].wi;
        }

        if (i < m && n > 0) {
            cnt += n * 1.0 / a[i].pi;
        }
        printf("%.2lf\n", cnt);
    }
    return 0;
}