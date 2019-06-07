#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[111];
    int e, q;
    while (cin >> e >> q) {
        for (int i = 0; i < q; i++) {
            cin >> a[i];
        }
        cout << e << endl;
        for (int i = 0; i < q; i++) {
            cout << 2 * e - a[i] << endl;
        }
    }
    return 0;
}