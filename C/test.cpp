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

int n, m, xx, yy;
int a[22][22], cat[22][22];

int ans;
void dfs(int x, int y) {
    if (x == n && y == m) {
        ans++;
        return;
    }

    if (x < 0 || y < 0 || x > n || y > m) return;

    if (cat[x][y] == 0 && a[x][y] == 0) {
        cat[x][y] = 1;
        dfs(x + 1, y);
        dfs(x, y + 1);
        cat[x][y] = 0;
    }
}
int main() {
    cin >> n >> m >> xx >> yy;

    memset(a, 0, sizeof(a));
    memset(cat, 0, sizeof(cat));
    a[xx][yy] = 1;

    a[xx - 2][yy - 1] = 1;
    a[xx - 1][yy - 2] = 1;
    a[xx + 1][yy - 2] = 1;
    a[xx + 2][yy - 1] = 1;

    a[xx - 2][yy + 1] = 1;
    a[xx - 1][yy + 2] = 1;
    a[xx + 1][yy + 2] = 1;
    a[xx + 2][yy + 1] = 1;

    ans = 0;
    dfs(0, 0);
    cout << ans << endl;
    return 0;
}