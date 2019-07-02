#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;
struct node {
    int x, y;
} a[105];
int n, m;
double gra[105][105], dist[105];
int cat[105];
void Dijkstra(int k) {
    for (int i = 1; i <= n; i++) dist[i] = gra[k][i];

    dist[k] = 0;
    cat[k] = 1;

    for (int q = 1; q <= n; q++) {
        int min = INF;
        int index = k;
        for (int j = 1; j <= n; j++) {
            if (!cat[j] && dist[j] < min) {
                min = dist[j];
                index = j;
            }
        }

        cat[index] = 1;
        for (int i = 1; i <= n; i++) {
            if (!cat[i] && gra[index][i] < INF &&
                dist[i] > gra[index][i] + dist[index])
                dist[i] = gra[index][i] + dist[index];
        }
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &a[i].x, &a[i].y);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j)
                gra[i][j] = 0;
            else
                gra[i][j] = INF;
        }
    }

    int u, v;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &u, &v);
        double t = sqrt(pow((a[u].x - a[v].x), 2) + pow((a[u].y - a[v].y), 2));
        if (gra[u][v] > t) gra[u][v] = gra[v][u] = t;
    }
    scanf("%d %d", &u, &v);
    memset(cat, 0, sizeof(cat));

    Dijkstra(u);
    printf("%.2lf\n", dist[v]);

    return 0;
}