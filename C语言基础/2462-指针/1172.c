#include <stdio.h>
int main()
{
    int n, i, j;
    int a[10][10];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++) //巧妙输出
        {
            sum += a[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}
