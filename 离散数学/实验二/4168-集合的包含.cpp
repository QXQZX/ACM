#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int main() {
    int a[111], b[111];
    int n, num;
    while (cin >> n) {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= n; i++) {
            cin >> num;
            a[i] = num;
        }
        for (int i = 1; i <= n; i++) {
            cin >> num;
            b[i] = num;
        }
        int flag = 1;
        for (int i = 1; i <= n; i++) {
            if (a[i] == 1 && b[i] != 1) flag = 0;
        }
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 192KB
Submit time: 2019-04-11 10:14:01
****************************************************/