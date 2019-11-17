#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX

int n, m;
int gra[111][111], cat[111], dist[111];

void Dijkstra(int k) {
    for (int i = 1; i <= n; i++)  // dist数组初始化
        dist[i] = gra[k][i];

    dist[k] = 0;  // 初始化起点
    cat[k] = 1;

    for (int q = 1; q <= n; q++) {
        int min = INF;
        int index = k;  // 记录下一个确定点的序号
        for (int j = 1; j <= n; j++) {
            if (!cat[j] && dist[j] < min) {
                min = dist[j];
                index = j;
            }
        }
        cat[index] = 1;
        if (index == n)  // 剪枝
            break;

        for (int i = 1; i <= n; i++) {
            if (!cat[i] && gra[index][i] < INF &&
                dist[i] > dist[index] + gra[index][i])
                dist[i] = dist[index] + gra[index][i];
        }
    }
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
        for (int i = 0; i < m; i++) {
            cin >> a >> b >> c;
            if (gra[a][b] > c)  // 覆盖最短路 少了 a不了
                gra[a][b] = gra[b][a] = c;
        }
        if (m == 0)
            cout << "0" << endl;
        else {
            Dijkstra(1);
            cout << dist[n] << endl;
        }
    }

    return 0;
}