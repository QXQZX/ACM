/*数据结构实验之图论一
 *
 *基于邻接矩阵的广度优先搜索遍历
 *
 */
#include <bits/stdc++.h>
using namespace std;
int gra[111][111];       // 邻接矩阵
int cat[111], ans[111];  // cat标记 // 存ans遍历结果
int k, m, t;             // k是定点个数 t 是起始顶点
int cnt;
void bfs(int i)  // 通过队列实现bfs
{
    queue<int> q;
    ans[cnt++] = i;  // 存入答案数组
    q.push(i);       // 入队
    cat[i] = 1;      // 遍历标记
    while (!q.empty()) {
        int temp = q.front();  // 遍历temp的能到达的点
        q.pop();               // 出队
        for (int j = 0; j < k; j++) {
            if (cat[j] == 0 &&
                gra[temp][j] == 1)  //未曾遍历 且 此点和原队首有线连接
            {
                q.push(j);
                ans[cnt++] = j;
                cat[j] = 1;
            }
        }
    }
}
int main() {
    int n, u, v;
    cin >> n;
    while (n--) {
        memset(gra, 0, sizeof(gra));
        memset(cat, 0, sizeof(cat));
        cin >> k >> m >> t;
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            gra[u][v] = gra[v][u] = 1;
        }
        cnt = 0;
        bfs(t);  //传入起始点标号
        for (int i = 0; i < k; i++) {
            if (i == k - 1)
                cout << ans[i] << endl;
            else
                cout << ans[i] << ' ';
        }
    }
    return 0;
}
