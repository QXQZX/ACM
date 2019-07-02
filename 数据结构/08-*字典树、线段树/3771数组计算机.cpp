/* 线段树学习 -01(模仿别人代码)
* 时间复杂度: O(logn)
* 增加数组某个位置元素的值大小
* 求区间[l, r]的元素和
* 待续。。。
*/
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int left, right; // 区间边界
    long long data;  // 区间和
};
node tree[1000005];
long long num[1000005];
void build_tree(int id, int l, int r) // 建立线段树(递归)
{
    tree[id].left = l;
    tree[id].right = r;
    if (l == r) // 当是叶子节点的时候
        tree[id].data = num[l];
    else
    {
        int mid = (l + r) / 2;                                         // 二分建立左子树和右子树
        build_tree(id * 2 + 1, l, mid);                                // 建立左子树
        build_tree(id * 2 + 2, mid + 1, r);                            // 建立右子树
        tree[id].data = tree[id * 2 + 1].data + tree[id * 2 + 2].data; // 该节点的区间和等于左子树的区间线段和+右子树的区间线段和
    }
}
long long query(int id, int l, int r) // 查询[l, r]区间和
{
    int left = tree[id].left;
    int right = tree[id].right;
    if (left > r || right < l) // 当[l, r]区间和id节点的区间无交集的时候
        return 0;
    // 求交集 画图模拟
    l = max(left, l);
    r = min(right, r);
    if (left == l && right == r) // 当[l, r]区间在id节点区间的内时
        return tree[id].data;
    // 当[l, r]区间与id节点相交的时候(不是包含关系)
    // 查询左子树和右子树 左右子树必有个反回0 所以求和即可
    return query(2 * id + 1, l, r) + query(2 * id + 2, l, r);
}
void update(int id, int pos, long long data) // 更新某个位置元素的值
{
    int left = tree[id].left;
    int right = tree[id].right;
    if (left > pos || right < pos) // 当pos 不在区间[l, r]中的时候
        return;
    // 如果在 和++data
    tree[id].data += data;
    if (left == right)
        return;
    update(id * 2 + 1, pos, data); // 更新左子树
    update(id * 2 + 2, pos, data); // 更新右子树
}
int main()
{
    ios::sync_with_stdio(false);
    int n, q;
    long long v;
    while (cin >> n)
    {
        memset(num, 0, sizeof(num));
        memset(tree, 0, sizeof(tree));
        for (int i = 0; i < n; i++)
            cin >> num[i];
        build_tree(0, 0, n - 1); // 根节点是 0
        cin >> q;
        while (q--)
        {
            int m, p, l, r;
            cin >> m;
            if (m == 2)
            {
                cin >> l >> r;
                cout << query(0, l - 1, r - 1) << endl;
            }
            else if (m == 1)
            {
                cin >> p >> v; // 对p位置的元素加v
                update(0, p - 1, v);
            }
        }
    }
    return 0;
}