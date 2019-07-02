#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int cnt;
    tree *nextt[26];
};
tree T[1000000]; // 申请静态内存
int top;
tree *creat() // 创建下一代
{
    tree *p = &T[top++];
    for (int i = 0; i < 26; i++)
        p->nextt[i] = NULL;
    p->cnt = 0;
    return p;
}

void insert(tree *root, char *str) // 插入单词构建字典
{
    tree *p = root;
    for (int i = 0; i < strlen(str); i++)
    {
        int index = str[i] - 'a';    // index 索引字符str[i]在26字母中的顺序
        if (p->nextt[index] != NULL) // 当这一位置已经有了这个字符的时候 进入下一代
        {
            p = p->nextt[index]; // 进入判断下一层index位置是否有元素
            continue;
        }
        else // 当这一位置没有有这个字符的时候 开辟下一代并存入将此字符当代
        {
            p->nextt[index] = creat();
            p = p->nextt[index];
        }
    }
    p->cnt = 1; // 标记这里存完一个单词 便于后序查找
    //return 0;
}

int search(tree *root, char *str)
{
    tree *p = root;
    for (int i = 0; i < strlen(str); i++)
    {
        int index = str[i] - 'a';
        if (p->nextt[index] != NULL) // 匹配到该字母 进入下一层
            p = p->nextt[index];
        else // 匹配不到终止
            return 0;
    }
    /*所有字母都已经匹配到了 判断是否存在改单词*/
    if (p->cnt == 1) // 存在
        return 1;
    else // 不存在返回0
        return 0;
}
int main()
{
    int n, m;
    char s[11];

    while (~scanf("%d %d", &n, &m))
    {
        if (m == 0 && n == 0)
            break;
        top = 0;
        tree *root = creat();
        for (int i = 0; i < n; i++)
        {
            scanf("%s", s);
            insert(root, s);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%s", s);
            int ans = search(root, s);
            if (ans == 1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}