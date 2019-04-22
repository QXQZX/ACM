#include "stdc++.h"
// #include <bits/stdc++.h>
#define INF INT_MAX

using namespace std;

int gra[505][505];
int money[505][505];
int cat[505];
int n, m, s, d;

void floyd() {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (gra[i][j] > gra[i][k] + gra[k][j]) {
                    gra[i][j] = gra[i][k] + gra[k][j];
                    money[i][j] = money[i][k] + money[k][j];
                } else if (gra[i][j] == gra[i][k] + gra[k][j]) {
                    if (money[i][j] > money[i][k] + money[k][j])
                        money[i][j] = money[i][k] + money[k][j];
                }
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m >> s >> d;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    gra[i][j] = 0;
                    money[i][j] = 0;
                } else {
                    gra[i][j] = INF;
                    money[i][j] = INF;
                }
            }
        }

        int u, v, len, mon;
        for (int i = 0; i < m; i++) {
            cin >> u >> v >> len >> mon;
            if (money[u][v] > mon) {
                gra[u][v] = gra[v][u] = len;
                money[u][v] = money[v][u] = mon;
            }
        }
        floyd();
        cout << gra[s][d] << " " << money[s][d] << endl;
    }

    return 0;
}