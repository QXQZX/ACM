#include <stdio.h>
int main()
{
    int i, j, n;
    int a[101][101];

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
    //等价于 scanf("%d",a[i]+j);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == n)
                printf("%d\n", a[j][i]);
            else
                printf("%d ", a[j][i]);
        }
    }
    return 0;
}