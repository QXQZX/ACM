/*包含二叉树常用操作函数*/
/*未完待续...*/
tree *creat(tree *root) // 以一个字符串为例 构建二叉树
{
    if (str[cnt] == ',') // 此字符串为全局
    {
        cnt++; // 计数的全局变量
        return NULL;
    }
    root = new tree;
    root->c = str[cnt++];
    root->l = creat(root->l);
    root->r = creat(root->r);
    return root;
}

tree *show_mid(tree *root) // 前序遍历
{
    if (root)
    {
        cout << root->data;
        show_mid(root->l);
        show_mid(root->r);
    }
}
tree *show_mid(tree *root) // 中序遍历
{
    if (root)
    {
        show_mid(root->l);
        cout << root->data;
        show_mid(root->r);
    }
}

tree *show_back(tree *root) // 后序遍历
{
    if (root)
    {
        show_back(root->l);
        show_back(root->r);
        cout << root->data;
    }
}

void show(tree *root) // 层序遍历二叉树 // 通过队列实现
{
    queue<tree *> q;
    if (root)
        q.push(root); // 树存在的 进入队列
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        if (root)
        {
            cout << root->c;
            q.push(root->l);
            q.push(root->r);
        }
    }
}

void tree_back(int len, char *s1, char *s2, char *ans) // 由先序和中序推出二叉树的后序
{                                                      // s1为先序  s2为中序
    int i;
    if (len <= 0) // 递归边界 长度为0时
        return;
    for (i = 0; i < len; i++)
    {
        if (s2[i] == s1[0])
            break;
    }
    tree_back(i, s1 + 1, s2, ans);                           // 遍历左子树
    tree_back(len - i - 1, s1 + i + 1, s2 + i + 1, ans + i); // 遍历右子树
    ans[len - 1] = s1[0];                                    // 存入后序数组
}

void tree_front(int len, char *s1, char *s2) // 由中序和后序推出二叉树前序
{                                            // s1中序s2后序
    if (len <= 0)
        return;
    int i = strchr(s1, s2[len - 1]) - s1; // 从s1中搜索s2[len-1] 并返回地址,地址减去首地址即为子树长度
    ans[cnt++] = s2[len - 1];
    tree_front(i, s1, s2);                       // 递归搜索左子树
    tree_front(len - i - 1, s1 + i + 1, s2 + i); //递归搜素右子树 存到地址之后
}

tree *make_tree_from_frontmid(int len, char *s1, char *s2) // 根据前序和中序建立二叉树
{
    int i;
    tree *root;
    if (len <= 0) // 递归边界 如果len为0则不能建树
        return NULL;
    root = new tree; // new一个新节点
    root->c = s1[0];
    for (i = 0; i < len; i++)
    {
        if (s2[i] == s1[0]) // 在中序中寻找根节点
            break;
    }
    root->l = make_tree_from_frontmid(i, s1 + 1, s2);                       // 递归建立左子树
    root->r = make_tree_from_frontmid(len - i - 1, s1 + i + 1, s2 + i + 1); // 递归建立右子树
    return root;
}

tree *make_tree_from_midback(int len, char *s1, char *s2) // 根据中序和后序建立二叉树
{                                                         // s1中序s2后序
    tree *root;
    if (len <= 0)
        return NULL;
    int i = strchr(s1, s2[len - 1]) - s1; // 从s1中搜索s2[len-1] 并返回地址,地址减去首地址即为子树长度
    root = new tree;
    root->c = s2[len - 1];
    root->l = make_tree_from_midback(i, s1, s2);                       // 递归搜索左子树
    root->r = make_tree_from_midback(len - i - 1, s1 + i + 1, s2 + i); //递归搜素右子树 存到地址之后
    return root;
}

void show(tree *root) // 层序遍历二叉树 通过队列实现
{                     // 从上到下  从左到右
    queue<tree *> q;
    if (root) // 树存在 则入队
        q.push(root);
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        if (root)
        {
            cout << root->c;
            q.push(root->l); // 左右树依次进队
            q.push(root->r);
        }
    }
}

int count_leaves(tree *root) // 求二叉树的子叶个数
{
    int ans = 0;
    if (root)
    {
        if (root->l == NULL && root->r == NULL)
            ans++;             // 子叶数++
        count_leaves(root->l); // 递归计算左子树
        count_leaves(root->r); // 递归计算右子树
    }
}

int tree_height(tree *root) // 求二叉树的高度 递归实现
{
    if (root) // 当树存在的时候
    {
        int leftcnt = tree_height(root->l);
        int rightcnt = tree_height(root->r);
        return (leftcnt > rightcnt) ? leftcnt + 1 : rightcnt + 1;
    }
    else
        return 0;
}

void print_leaves(tree *root) // 输出二叉树的叶子
{                             // 层序遍历原理 从上到下从做到右 正好能按相应的的顺序输出 子叶
    queue<tree *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        root = q.front(); //访问队首元素
        q.pop();          //删除队首
        if (root)
        {
            if (root->l == NULL && root->r == NULL)
                cout << root->c;
            q.push(root->l); // 左子树进入队列
            q.push(root->r); // 右子树进入队列
        }
    }
}
