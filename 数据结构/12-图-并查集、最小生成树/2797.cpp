#include "bits/stdc++.h"
using namespace std;

int pre[100005];
int find(int x) {
    int i = x;

    while (x != pre[x]) x = pre[x];

    // 路径压缩
    while (i != x) {
        int temp = pre[i];
        pre[i] = x;
        i = temp;
    }
    return x;
}
void make(int x, int y) {
    int find_x = find(x);
    int find_y = find(y);
    if (find_x != find_y) pre[find_x] = find_y;
}
int main() {
    int n, m, a, b;
    while (cin >> n >> m) {
        for (int i = 0; i <= n; i++) pre[i] = i;

        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            make(a, b);
        }

        cin >> a >> b;
        if (pre[a] == pre[b])
            cout << "same" << endl;
        else
            cout << "not sure" << endl;
        // cout << find(a) << endl;
        // cout << find(b) << endl;
    }

    return 0;
}