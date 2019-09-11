// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;
int a[50005];
int cnt;
int make(int l, int r) {
    int ans = 0;
    cnt++;
    if (l == r) {
        if (a[l] >= 0) {
            ans = a[l];
        } else {
            ans = 0;
        }
    } else {
        int mid = (l + r) / 2;
        int lsum = make(l, mid);
        int rsum = make(mid + 1, r);
        int sum1 = 0, temp = 0, sum2 = 0;

        for (int i = mid; i >= l; i--) {
            temp += a[i];
            sum1 = max(sum1, temp);
        }
        temp = 0;
        for (int i = mid + 1; i <= r; i++) {
            temp += a[i];
            sum2 = max(sum2, temp);
        }
        ans = max(lsum, rsum);
        ans = max(sum1 + sum2, ans);
    }
    return ans;
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    cnt = 0;
    int ans = make(1, n);
    // 直接输出返回的函数会报错
    // printf("%d %d\n", make(1, n), cnt);
    printf("%d %d\n", ans, cnt);

    return 0;
}