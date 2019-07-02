#include "stdc++.h"
#define INF INT_MAX
using namespace std;
int gra[111][111];
int cat[111];
int n, m;

void Floyed() {
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
    ios::sync_with_stdio(false);
    memset(gra, 0, sizeof(gra));
    memset(cat, 0, sizeof(cat));
    int a, b, c;
    while (cin >> n >> m) { 
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    gra[i][j] = 0;
                else
                    gra[i][j] = INF;
            }
        }

        while (m--) {
            cin >> a >> b >> c;
            if (gra[a][b] > c) gra[a][b] = gra[b][a] = c;
        }

        Floyed();
        cout << gra[1][n] << endl;
    }

    return 0;
}