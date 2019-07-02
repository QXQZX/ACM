#include <stdio.h>
void f(int *q, int n) //排序函数
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(q + i) > *(q + j)) //等价于  a[i]与a[j]更换值
            {
                int temp = *(q + i);
                *(q + i) = *(q + j);
                *(q + j) = temp;
            }
        }
    }
}
int main()
{
    int a[100], b[100][100];
    int i, j;
    int m, n;
    int *p = a;
    scanf("%d %d", &m, &n);
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        //调用排序函数
        f(p, n);
        //切换成二维数组
        for (i = 0; i < n; i++)
        {
            b[j][i] = a[i];
        }
    }
    //输出
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (i == n - 1)
                printf("%d\n", b[j][i]);
            else
            {
                printf("%d ", b[j][i]);
            }
        }
    }
    return 0;
}
