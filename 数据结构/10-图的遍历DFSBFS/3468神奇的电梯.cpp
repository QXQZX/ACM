#include <bits/stdc++.h>
using namespace std;
struct node
{
    int num;  // 楼层
    int step; // 次数
};
vector<int> gra[205]; // 用vector  创建图 (可变数组 比稀疏邻接矩阵更节省空间)
int cat[205];         // 标记数组
int n, m, q;
int bfs(int i, int wantto)
{
    cat[i] = 1;
    node p = {i, 1};
    queue<node> q;
    q.push(p);
    while (!q.empty())
    {
        node temp = q.front();
        q.pop();
        if (temp.num == wantto)
            return temp.step;

        vector<int>::iterator it; // it指针指向第一个元素
        for (it = gra[temp.num].begin(); it < gra[temp.num].end(); it++)
        {
            node t = {*it, temp.step + 1};
            if (!cat[*it])
            {
                cat[*it] = 1;
                q.push(t);
            }
        }
        /*****************或者如下写法*******************/
        // for (int i = 0; i < gra[temp.num].size(); i++)
        // {
        //     node t = {gra[temp.num][i], temp.step + 1};
        //     if (!cat[gra[temp.num][i]])
        //     {
        //         cat[gra[temp.num][i]] = 1;
        //         q.push(t);
        //     }
        // }
    }
    return -1;
}
int main()
{
    int num, pos, to;
    while (cin >> n >> m >> q)
    {
        for (int i = 0; i < 205; i++) // 每次初始化否则必错
            gra[i].clear();
        for (int i = 0; i < m; i++)
        {
            cin >> pos >> num;
            while (num--)
            {
                cin >> to;
                gra[pos].push_back(to); // 这句等价于 gra[pos][cnt++] = to;
            }
        }
        int wantto;
        while (q--)
        {
            cin >> wantto;
            memset(cat, 0, sizeof(cat));
            cout << bfs(1, wantto) << endl;
        }
    }
    return 0;
}