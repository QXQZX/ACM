#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;
struct node
{
    int x, y;
} a[105];
int n, m;
double gra[105][105];
void Floyed()
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (gra[i][j] > gra[i][k] + gra[k][j])
                    gra[i][j] = gra[i][k] + gra[k][j];
            }
        }
    }
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a[i].x, &a[i].y);
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                gra[i][j] = 0;
            else
                gra[i][j] = INF;
        }
    }

    int u, v;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        double t = sqrt(pow((a[u].x - a[v].x), 2) + pow((a[u].y - a[v].y), 2));
        if (gra[u][v] > t)
            gra[u][v] = gra[v][u] = t;
    }
    Floyed();
    scanf("%d %d", &u, &v);
    printf("%.2lf\n", gra[u][v]);
    return 0;
}

