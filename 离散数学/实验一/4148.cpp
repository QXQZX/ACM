#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int main() {
    int p, q;
    int a[7];
    while (cin >> p >> q) {
        memset(a, -1, sizeof(a));
        a[0] = (p == 1 && q == 1) ? 1 : 0;
        a[1] = (p == 1 || q == 1) ? 1 : 0;
        a[2] = (p == 0 || q == 1) ? 1 : 0;
        a[3] = (p == q) ? 1 : 0;
        // a[3] = ((p == 1 && q == 1) || (p == 0 && q == 0)) ? 1 : 0;
        a[4] = (p == 1 && q == 1) ? 0 : 1;
        a[5] = (p == 0 && q == 0) ? 1 : 0;

        for (int i = 0; i < 6; i++) {
            if (i == 5)
                cout << a[i] << endl;
            else
                cout << a[i] << ' ';
        }
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 192KB
Submit time: 2019-03-14 10:18:41
****************************************************/