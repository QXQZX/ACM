// E [3374] - 数据结构实验之查找二：平衡二叉树
#include <bits/stdc++.h>
using namespace std;
struct tree {
    int data;  //记录关键字数值
    tree *l, *r;
    int height;  //平衡因子
};
int height(tree *p)  //求树的深度
{
    if (p == NULL) return -1;
    return p->height;
}
tree *LL(tree *p)  //对LL型直接在不平衡结点进行左旋转
{
    tree *q;
    q = p->l;     // q是p的左子树
    p->l = q->r;  // q的左子树一定小于p->data  所以p->l连上q->r
    q->r = p;     // q->r连上p
    p->height = max(height(p->l), height(p->r)) +
                1;  // 结点的位置变了，要更新结点的高度值
    q->height = max(height(q->l), p->height) + 1;
    return q;
}
tree *RR(tree *p)  //对RR型直接在不平衡结点进行右旋转
{
    tree *q;  // 连接原理与LL相同
    q = p->r;
    p->r = q->l;
    q->l = p;
    p->height = max(height(p->l), height(p->r)) + 1;
    q->height = max(height(q->r), p->height) + 1;
    return q;
}
tree *LR(tree *p) {
    p->l = RR(p->l);  //在不平衡结点p的左儿子处进行右旋转
    return LL(p);     //在不平衡结点p处进行左旋转并返回新的根
}
tree *RL(tree *p) {
    p->r = LL(p->r);  //在不平衡结点p的右儿子处进行左旋转
    return RR(p);     //在不平衡结点p处进行左旋转并返回新的根
}
tree *insert(tree *p, int k) {
    if (p == NULL)  //待插入的值赋给新开辟的结点
    {
        p = new tree;
        p->data = k;
        p->height = 0;
        p->l = p->r = NULL;
    } else if (k < p->data)  //若待插入的值小于p的关键字数值，则插入到左子树中
    {
        p->l = insert(p->l, k);
        if (height(p->l) - height(p->r) == 2)  //该树出现不平衡
        {
            if (k < p->l->data)  //若待插入的值插到了左儿子的左子树上则单旋转
                p = LL(p);
            else  //反之，双旋转
                p = LR(p);
        }
    } else if (k > p->data)  //道理同上
    {
        p->r = insert(p->r, k);
        if (height(p->l) - height(p->r) == -2) {
            if (k > p->r->data)
                p = RR(p);
            else
                p = RL(p);
        }
    }
    p->height = max(height(p->l), height(p->r)) + 1;
    return p;
}
int main() {
    int n, k;
    while (cin >> n) {
        tree *head = NULL;
        for (int i = 0; i < n; i++) {
            cin >> k;
            head = insert(head, k);
        }
        cout << head->data << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 208KB
Submit time: 2018-12-19 16:38:38
****************************************************/