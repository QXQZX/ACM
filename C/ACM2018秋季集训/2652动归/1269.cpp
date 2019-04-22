#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int gra[16][16], vis[16][16];
int X[400], Y[400];          // 记录每一次点的坐标
int dirx[] = {0, -1, 0, 1};  // 方向数组
int diry[] = {-1, 0, 1, 0};
int step, flag;
int startx, endx;
int starty, endy;
int n, m;
void print() {
    for (int i = 0; i < step; i++) {
        if (i == step - 1)
            printf("(%d,%d)\n", X[i], Y[i]);
        else
            printf("(%d,%d)->", X[i], Y[i]);
    }
}
void dfs(int x, int y) {
    vis[x][y] = 1;
    if (x < 1 || y < 1 || x > n || y > m) {
        return;
    }
    if (x == endx && y == endy) {
        flag = 1;
        print();
        return;
    }
    for (int i = 0; i < 4; i++) {
        int a = x + dirx[i];
        int b = y + diry[i];
        if (!vis[a][b] && gra[a][b]) {
            X[step] = a;
            Y[step] = b;
            step++;
            dfs(a, b);
            vis[a][b] = 0;  // 回塑 取消标记
            step--;
        }
    }
}
int main() {
    int num;

    cin >> n >> m;
    memset(gra, 0, sizeof(gra));
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> num;
            gra[i][j] = num;
        }
    }
    step = 0;
    flag = 0;
    cin >> startx >> starty;
    cin >> endx >> endy;
    // 起点初始化
    X[0] = startx;
    Y[0] = starty;
    step++;
    dfs(startx, starty);

    if (!flag) cout << -1 << endl;
    return 0;
}