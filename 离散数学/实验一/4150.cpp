#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int main() {
    int n, a[100], b[100], i;
    while (cin >> n) {
        for (i = 1; i <= n; i++) cin >> a[i];
        for (i = 1; i <= n; i++) cin >> b[i];
        for (i = 1; i < n; i++) {
            if (a[i] == 1 && b[i] == 1)
                cout << "1 ";
            else
                cout << "0 ";
        }
        if (a[n] == 1 && b[n] == 1)
            cout << "1" << endl;
        else
            cout << "0" << endl;

        for (i = 1; i < n; i++) {
            if (a[i] == 1 || b[i] == 1)
                cout << "1 ";
            else
                cout << "0 ";
        }
        if (a[n] == 1 || b[n] == 1)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 152KB
Submit time: 2019-03-14 10:38:19
****************************************************/