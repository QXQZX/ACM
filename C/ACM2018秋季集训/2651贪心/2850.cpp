#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int n, m, a[10000005];
bool cmp(int a, int b) { return a > b; }
int main() {
    while (~scanf("%d %d", &n, &m)) {
        int c, p;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &c, &p);
            a[i] = p - c;
        }
        sort(a, a + n, cmp);
        long long ans = 0;
        for (int i = 0; i < m; i++) {
            ans += a[i];
        }
        printf("%lld\n", ans);
    }
    return 0;
}