#include <stdio.h>
int main()
{
    int a[1001];
    int i, m, n, max, value;
    scanf("%d %d", &m, &n);
    for (i = 1; i <= m; i++)
    {
        a[i] = 0;//全部初始化为0
    }
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &value);//骚操作，要了解
        a[value]++;
    }
    max = 0;
    value = 0;
    for (i = 1; i <= m; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            value = i;
        }
    }
    printf("%d\n%d\n", value, max);
    return 0;
}
