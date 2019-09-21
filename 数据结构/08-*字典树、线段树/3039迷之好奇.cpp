#include <bits/stdc++.h>
using namespace std;
struct node
{
    int cnt;       //出现该数字的次数
    int nextt[11]; // 存下一层的代号
};
node tree[1000000];
int top;
int creat()
{
    memset(tree[top].nextt, -1, sizeof(tree[top].nextt));
    tree[top].cnt = 0;
    return top++; // 返回层数
}
void insert(int k, char *str)
{
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        int index = str[i] - '0';
        if (tree[k].nextt[index] == -1)
            tree[k].nextt[index] = creat();
        tree[k].cnt++;            //出现该数字的次数
        k = tree[k].nextt[index]; // 将下一层的代数(top)赋给k
    }
}
int search(int k, char *str)
{
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        int index = str[i] - '0';
        if (tree[k].nextt[index] == -1)
            return 0; // 只要一个找不到就返回 0

        k = tree[k].nextt[index]; // 找到 将该数的下一层的代数传给K
    }
    return tree[k].cnt; // 数字出现次数
}
int main()
{
    int m, n;
    char s[19];
    while (cin >> n)
    {
        top = 0;
        int root = creat();
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            insert(root, s);
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> s;
            int ans = search(root, s);
            cout << ans << endl;
        }
        // cout<<endl;
    }
    return 0;
}
