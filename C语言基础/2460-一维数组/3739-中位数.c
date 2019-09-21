#include <stdio.h>
int main()
{
    int n, m, i;
    double num[100];
    while (scanf("%d", &n) != EOF)
    {
        //输入
        for (i = 0; i < n; i++)
        {
            scanf("%lf", &num[i]);
        }
        //冒泡排序
        for (i = 0; i < n - 1; i++)
        {
            for (m = i + 1; m < n; m++)
            {
                if (num[i] > num[m])
                {
                    int temp = num[i];
                    num[i] = num[m];
                    num[m] = temp;
                }
            }
        }
        //中位数输出
        int t = n % 2;
        if (t != 0)
        {
            printf("%.1lf\n", num[n / 2]);
        }
        else
        {
            printf("%.1lf\n", (num[n / 2] + num[n / 2 - 1]) / 2.0);
        }
    }
    return 0;
}
