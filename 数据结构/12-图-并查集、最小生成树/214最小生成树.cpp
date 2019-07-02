#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;

int n, m;
int gra[3111][3111]; // 记录点与点之间的权值

int cat[111]; // 标记
int lowc[3100];  //记录与这个点相连的边的最小权值（寻找最短路径，也就是最小边）

int prim() {
    int sum = 0; // 最小权值和

    cat[1] = 1;
    for (int i = 1; i <= n; i++) {
        lowc[i] = gra[1][i];
    }

    for (int i = 1; i < n; i++) {
        int minc = INF;  // 记录最小权值
        int index = -1;  // 记录最小权值相关点的下标
        for (int j = 1; j <= n; j++) {
            if (!cat[j] && minc > lowc[j]) {
                minc = lowc[j];
                index = j;
            }
        }

        if (minc == INF) return -1;
        sum += minc;
        cat[index] = 1;
        for (int j = 1; j <= n; j++) {
            if (!cat[j] && lowc[j] > gra[index][j]) lowc[j] = gra[index][j];
        }
    }
    return sum;
}
int main() {
    while (cin >> n >> m) {
        memset(cat, 0, sizeof(cat));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    gra[i][j] = 0;
                else
                    gra[i][j] = INF;
            }
        }
        int a, b, c;

        for (int i = 0; i < m; i++) {  // 输入边的情况
            cin >> a >> b >> c;
            if (c < gra[a][b]) gra[a][b] = gra[b][a] = c;
        }
        if (m == 0)
            cout << "0" << endl;
        else
            cout << prim() << endl;
    }

    return 0;
}