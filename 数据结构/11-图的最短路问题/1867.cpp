/*Dijkstra*/
#include "stdc++.h"
#define INF 9999999.9
using namespace std;
struct node {
    double x, y;  //  存放点的坐标
};

double gra[111][111];
double dis[111];  // 距离
int vis[111];
int n, m;

void Dijkstra(int s) {
    memset(vis,0,sizeof(vis));
    for (int i=0;i<=n;i++)
        dis[i] = gra[i][s];

    dis[s] = 0;
    vis[s] = 1;

    for (int i=1; i<=n; i++) {
        double Min = INF;
        int index;
        for (int j=1; j<=n; j++) {
            if (!vis[j] && dis[j] < Min) {
                index = j;
                Min = dis[j];
            }
        }

        vis[index] = 1;
        for (int j=1; j<=n; j++) {
            if (!vis[j] && dis[j] > dis[index] + gra[index][j])
                dis[j] = dis[index] + gra[index][j];
        }
    }
}
int main() {
    node a[111];
    scanf("%d", &n);

    memset(gra, INF, sizeof(gra));

    for (int i = 1; i <= n; i++) {
        scanf("%lf %lf", &a[i].x, &a[i].y);
    }

    scanf("%d", &m);
    int u, v, s, t;
    for (int i = 1; i <= m; i++) {
        scanf("%d %d", &u, &v);
        double x = a[u].x - a[v].x;
        double y = a[u].y - a[v].y;
        double l = sqrt(x * x + y * y);
        if (l < gra[u][v]) gra[u][v] = gra[v][u] = l;
    }
    for (int i = 0; i < 111; i++) gra[i][i] = 0;

    scanf("%d %d", &s, &t);

    Dijkstra(s);
    printf("%.2lf\n", dis[t]);
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 256KB
Submit time: 2019-03-18 20:07:23
****************************************************/

/*
//Floyd
#include "stdc++.h"
#define INF 9999999.9
using namespace std;
struct node {
    double x, y;
};

double gra[111][111];
int n, m;

void Floyd() {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (gra[i][j] > gra[i][k] + gra[k][j])
                    gra[i][j] = gra[i][k] + gra[k][j];
            }
        }
    }
}
int main() {
    node a[111];
    scanf("%d", &n);
    memset(gra, INF, sizeof(gra));

    for (int i = 1; i <= n; i++) {
        scanf("%lf %lf", &a[i].x, &a[i].y);
    }
    scanf("%d", &m);
    int u, v, s, t;
    for (int i = 1; i <= m; i++) {
        scanf("%d %d", &u, &v);
        double x = a[u].x - a[v].x;
        double y = a[u].y - a[v].y;
        double l = sqrt(x * x + y * y);
        if (l < gra[u][v]) gra[u][v] = gra[v][u] = l;
    }
    for (int i = 0; i < 111; i++) gra[i][i] = 0;

    scanf("%d %d", &s, &t);
    Floyd();

    printf("%.2lf\n", gra[s][t]);
    return 0;
}
*/

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 4ms
Take Memory: 252KB
Submit time: 2019-03-18 19:43:19
****************************************************/