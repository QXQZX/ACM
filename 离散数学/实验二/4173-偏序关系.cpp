#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int main() {
    int n, a[111][111];
    while (cin >> n) {
        int flag = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) cin >> a[i][j];
        }

        for (int i = 1; i <= n; i++) {
            if (!a[i][i]) {
                flag = 0;
                break;
            }

            for (int j = 1; j <= n; j++) {
                if (a[i][j] && a[j][i] && i != j) {
                    flag = 0;
                    break;
                }

                if (a[i][j]) {
                    for (int k = 1; k <= n; k++) {
                        if (a[j][k]) {
                            if (!a[i][k]) {
                                flag = 0;
                                break;
                            }
                        }
                    }
                }
            }
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
Take Memory: 152KB
Submit time: 2019-04-11 10:27:03
****************************************************/