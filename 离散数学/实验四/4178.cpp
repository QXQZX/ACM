/**
 * 百度解
 */
#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int u, v, w;
} Sj;

Sj f[1000000];

int q[10001];

int cmp(const void *a, const void *b) {
    Sj *aa = (Sj *)a;
    Sj *bb = (Sj *)b;
    return aa->w > bb->w ? 1 : -1;
}

int cz(int i) {
    int c = i;
    for (; q[c] >= 0; c = q[c])
        ;
    while (c != i) {
        int t = q[i];
        q[i] = c;
        i = t;
    }
    return c;
}

void jh(int a, int b) {
    int f1 = cz(a);
    int f2 = cz(b);
    int t = q[f1] + q[f2];
    if (q[f1] > q[f2]) {
        q[f1] = f2;
        q[f2] = t;
    } else {
        q[f2] = f1;
        q[f1] = t;
    }
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        for (int i = 0; i < m; i++) cin >> f[i].u >> f[i].v >> f[i].w;

        qsort(f, m, sizeof(f[0]), cmp);
        memset(q, -1, sizeof(q));

        int ans = 0;
        int c = 0;
        for (int i = 0; i < m; i++) {
            int u = f[i].u;
            int v = f[i].v;
            if (cz(u) != cz(v)) {
                c++;
                ans += f[i].w;
                jh(u, v);
            }
        }
        if (c == n - 1)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }
}
