#include "stdc++.h"
#define INF INT_MAX
using namespace std;
struct node {
    int v, w;
    int next;
} edge[4000010];

int dis[500050], vis[500050], head[500050];
int n, m, cnt;

void add(int u, int v, int w) {
    edge[cnt].v = v;
    edge[cnt].w = w;
    edge[cnt].next = head[u];
    head[u] = cnt++;
}

void SPFA(int s, int e) {
    memset(vis, 0, sizeof(vis));
    queue<int> q;

    for (int i = 0; i <= n; i++) dis[i] = INF;

    dis[s] = 0;
    vis[s] = 1;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        vis[u] = 0;
        for (int i = head[u]; i != -1; i = edge[i].next) {
            int v = edge[i].v;
            if (dis[v] > dis[u] + edge[i].w) {
                dis[v] = dis[u] + edge[i].w;
                if (!vis[v]) {
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
    }
}
int main() {
    int u, v, w, s, e;
    while (~scanf("%d %d", &n, &m)) {
        memset(head, -1, sizeof(head));
        cnt = 0;
        while (m--) {
            scanf("%d %d %d", &u, &v, &w);
            add(u, v, w);
            add(v, u, w);
        }

        scanf("%d %d", &s, &e);
        SPFA(s, e);
        printf("%d\n", dis[e]);
    }

    return 0;
}