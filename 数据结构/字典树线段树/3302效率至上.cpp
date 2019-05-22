#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX // 宏定义INF为整数最大值
struct node
{
    int max, min;
    int left, right;
};
node tree[1000000];
int num[50005];
void build(int id, int l, int r)
{
    tree[id].left = l;
    tree[id].right = r;
    if (l == r)
    {
        tree[id].max = num[l];
        tree[id].min = num[l];
    }
    else
    {
        int mid = (l + r) / 2;
        build(id * 2 + 1, l, mid);
        build(id * 2 + 2, mid + 1, r);
        tree[id].max = max(tree[2 * id + 1].max, tree[2 * id + 2].max);
        tree[id].min = min(tree[2 * id + 1].min, tree[2 * id + 2].min);
    }
}
int query_max(int id, int l, int r) // 查询区间最大值
{
    int left = tree[id].left;
    int right = tree[id].right;
    if (left > r || right < l)
        return 0; // 这个地地方必须是0
    l = max(left, l);
    r = min(right, r);
    if (l == left && r == right)
        return tree[id].max;

    return max(query_max(2 * id + 1, l, r), query_max(2 * id + 2, l, r));
}
int query_min(int id, int l, int r)
{
    int left = tree[id].left;
    int right = tree[id].right;
    if (left > r || right < l)
        return INF; // 这个地方必须是一个较大的值
    l = max(left, l);
    r = min(right, r);
    if (l == left && r == right)
        return tree[id].min;

    return min(query_min(2 * id + 1, l, r), query_min(2 * id + 2, l, r));
}
int main()
{
    ios::sync_with_stdio(false);
    int l, r, n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    build(0, 0, n - 1);
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        int ans = query_max(0, l - 1, r - 1) - query_min(0, l - 1, r - 1);
        cout << ans << endl;
    }
    return 0;
}