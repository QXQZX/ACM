#include <stdio.h>
int main()
{
    int i, n;
    int C, M, E;
    int sum[100];
    //输入
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &C, &M, &E);
        sum[i] = C + M + E;
    }
    //冒泡排序
    for (i = 0; i < n - 1; i++)
    {
        for (int m = i + 1; m < n; m++)
        {
            if (sum[i] > sum[m])
            {
                int t = sum[i];
                sum[i] = sum[m];
                sum[m] = t;
            }
        }
    }
    //输出
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", sum[i]);
    }
    
    return 0;
}
