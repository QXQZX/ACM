#include <cstdio>
#include <iostream>
#define max 10005
using namespace std;
int *a;
int *b;

int m, n;

int main() {
    a = (int *)malloc(max * sizeof(int));
    b = (int *)malloc(max * sizeof(int));
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int p = 0, q = 0;

    while (p < m && q < n) {
        if (a[p] < b[q]) {
            printf("%d ", a[p++]);
        } else {
            printf("%d ", b[q++]);
        }
    }
    // 比较大小输出即可
    if (p == m && q != n) {
        for (int i = q; i < n; i++) {
            printf("%d ", b[i]);
        }
    } else if (p != m && q == n) {
        for (int i = p; i < m; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}