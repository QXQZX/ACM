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
int a[10000001], b[10000001];
int nextt[1000001];
void get_next(int b[], int n) {
    nextt[0] = -1;
    int j = -1, i = 0;
    while (i < n) {
        if (j == -1 || b[i] == b[j]) {
            i++;
            j++;
            nextt[i] = j;
        } else
            j = nextt[j];  // 失配回溯
    }
}
int kmp(int a[], int b[], int m, int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (j == -1 || a[i] == b[j])  // j==-1 不能少  因为可能失配回溯到j-1
        {
            i++;
            j++;
        } else
            j = nextt[j];  // 失配回溯
    }
    if (j >= n)
        return i + 1 - n;
    else
        return -1;
}
int main() {
    int m, n;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    get_next(b, n);
    int ans1 = kmp(a, b, m, n);
    if (ans1 == -1)
        printf("-1\n");
    else {
        int ans2 = kmp(a + ans1, b, m, n);
        if (ans2 == -1)
            printf("%d %d\n", ans1, ans1 + n - 1);
        else
            printf("-1\n");
    }

    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 156ms
Take Memory: 636KB
Submit time: 2018-12-09 11:38:45
****************************************************/