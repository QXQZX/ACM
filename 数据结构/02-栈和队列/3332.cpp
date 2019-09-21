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
int main() {
    int t, n;
    int a[1001];

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int j, i = 0; i < n - 1; i++) {
            cout << a[i] << "-->";
            for (j = i + 1; j < n; j++) {
                if (a[j] > a[i]) {
                    cout << a[j] << endl;
                    break;
                }
            }
            if (j == n) cout << "-1" << endl;
        }
        cout << a[n - 1] << "-->-1" << endl << endl;
    }

    return 0;
}