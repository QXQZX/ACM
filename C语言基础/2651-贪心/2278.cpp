#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    double wi;
    double pi;
    double wp;
};
bool cmp(node a, node b) { return a.wp > b.wp; }
int main() {
    int n, m;
    node temp, a[10001];
    ;
    while (~scanf("%d %d", &n, &m) && n != -1 && m != -1) {
        for (int i = 0; i < m; i++) {
            scanf("%lf %lf", &a[i].wi, &a[i].pi);
            a[i].wp = a[i].wi / a[i].pi;
        }
        sort(a, a + m, cmp);
        double cnt = 0;
        int i;
        for (i = 0; i < m && n - a[i].pi >= 0; i++) {
            cnt += a[i].wi;
            n -= a[i].pi;
        }

        if (i < m && n > 0) {
            cnt += n * a[i].wp;
        }
        printf("%.3lf\n", cnt);
    }
    return 0;
}