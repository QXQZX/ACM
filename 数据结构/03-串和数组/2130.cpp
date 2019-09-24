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
    int n, m;
    int a[101][101];
    // int flag=0;
    while (cin >> n >> m) {
        // if (flag)
        //     cout<<endl;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        for (int j = 1; j <= m; j++) {
            for (int i = 1; i <= n; i++) {
                if (i == n)
                    cout << a[i][j] << endl;
                else
                    cout << a[i][j] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 8ms
Take Memory: 252KB
Submit time: 2018-12-05 18:21:00
****************************************************/