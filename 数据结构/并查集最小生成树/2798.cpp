#include "bits/stdc++.h"
#define MAXN 100005
using namespace std;
int pre[MAXN], vis[MAXN];
int find(int x) {
    while (x != pre[x]) x = pre[x];

    return x;
}
void make(int a, int b) {
    int find_a = find(a);
    int find_b = find(b);
    if (find_a != find_b) pre[find_a] = find_b;
}
int main() {
    int m, a, b;
    while (cin >> m) {
        memset(vis, 0, sizeof(vis));

        for (int i = 0; i < MAXN; i++) pre[i] = i;

        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            make(a, b);
            vis[a] = 1;  // vis数组目的是找出有哪些点出现
            vis[b] = 1;
        }
        int sum1 = 0;  // 找出点的总数
        int sum2 = 0;  // 掌门个数

        for (int i = 0; i < MAXN; i++) {
            if (vis[i] == 1)  //找出总人数
                sum1++;
            if (vis[i] == 1 && pre[i] == i)  //找出掌门个数
                sum2++;
        }
        if (sum2 == 1 && sum1 == m + 1)  //当仅有一个掌门点 并且 m条边有 m+1个点时候
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 80ms
Take Memory: 936KB
Submit time: 2019-03-25 19:31:12
****************************************************/