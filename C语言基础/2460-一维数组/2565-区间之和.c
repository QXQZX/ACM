#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int num[10000];

    for (i = 0; i < n; i++)   //数组不能从i=1开始赋值   因为当n=10000时
    {                           //num[10000]这个数组只能存9999个数
        scanf("%d", &num[i]);
    }

    int a, b, sum = 0;
    scanf("%d %d", &a, &b);

    for (i = a - 1; i <= b - 1; i++)
    {
        sum += num[i];
    }
    printf("%d\n", sum);

    return 0;
}
