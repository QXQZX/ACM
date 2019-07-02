#include "stdc++.h"
#define INF 0x3f3f3f3f
/*
不要使用 INT_MAX 2^31-1=2147483647
因为在后面使用sum += 的时候  可能会出现无穷大+无穷大的情况导致溢出
0x3f3f3f3f  1061109567
0x3f3f3f3f优点
*/

using namespace std;
int gra[666][666];
int pig_home[355];
int n, m, k;

void Floyd() {
    for (int k = 1; k <= m; k++) {
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= m; j++) {
                if (gra[i][j] > gra[i][k] + gra[k][j])
                    gra[i][j] = gra[i][k] + gra[k][j];
            }
        }
    }
}
int main() {
    scanf("%d %d %d", &n, &m, &k);

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == j)
                gra[i][j] = 0;
            else
                gra[i][j] = INF;
        }
    }

    for (int i = 0; i < n; i++) scanf("%d", &pig_home[i]);

    int u, v, w;
    for (int i = 0; i < k; i++) {
        scanf("%d %d %d", &u, &v, &w);
        if (gra[u][v] > w) gra[u][v] = gra[v][u] = w;
    }

    Floyd();
    int sum = 0;
    int ans = INF;

    // 每头猪到每个猪圈的距离  o(n*m)
    for (int i = 1; i <= m; i++) {  // 遍历每一个猪圈
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += gra[pig_home[j]][i];
        }
        if (sum < ans)
            ans = sum;
    }

    printf("%d\n", ans);
    return 0;
}