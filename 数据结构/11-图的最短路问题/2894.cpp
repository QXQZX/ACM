#include <bits/stdc++.h>
#define INF INT_MAX
#define Max 500005
using namespace std;
struct edge {
    int v, w;
    int next;
} edge[Max];

int head[Max];
int dis[Max];
int cat[Max];
int n, m, cnt;

void add(int u, int v, int w) {
    edge[cnt].v = v;
    edge[cnt].w = w;
    edge[cnt].next = head[u];
    head[u] = cnt++;
}

void spfa(int s, int e) {
    queue<int> q;

    for (int i = 0; i <= n; i++) dis[i] = INF;
    dis[s] = 0;
    cat[s] = 1;
    q.push(s);

    while (!q.empty()) {
        int t = q.front();
        q.pop();
        cat[t] = 0;

        for (int i = head[t]; i != -1; i = edge[i].next) {
            int v = edge[i].v;
            if (dis[v] > dis[t] + edge[i].w) {
                dis[v] = dis[t] + edge[i].w;
                if (!cat[v]) {
                    cat[v] = 1;
                    q.push(v);
                }
            }
        }
    }
}
int main() {
    int u, v, w;
    int s, e;
    while (cin >> n >> m) {
        memset(cat, 0, sizeof(cat));
        memset(head, -1, sizeof(head));
        cnt = 0;
        while (m--) {
            cin >> u >> v >> w;
            add(u, v, w);
            add(v, u, w);
        }
        cin >> s >> e;
        spfa(s, e);
        cout << dis[e] << endl;
    }
    return 0;
}