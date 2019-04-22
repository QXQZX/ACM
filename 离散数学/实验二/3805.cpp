#include <c++/4.2.1/bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, a[11111], b[11111];
    while (cin >> n >> m >> k) {
        memset(a, -1, sizeof(a));
        memset(b, -1, sizeof(b));
        int x, y, num;
        for (int i = 0; i < n; i++) {
            cin >> num;
            a[num] = 0;
        }
        for (int i = 0; i < m; i++) {
            cin >> num;
            b[num] = 0;
        }
        while (k--) {
            cin >> x >> y;
            a[x]++;
            b[y]++;
        }

        int flag = 1;
        for (int i = 1; i <= 10000; i++) {
            if (a[i] > 1) {
                flag = 0;
                break;
            }
        }
        for (int i = 1; i <= 10000; i++) {
            if (b[i] < 1 && b[i] != -1) {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 276KB
Submit time: 2019-04-11 10:52:56
****************************************************/