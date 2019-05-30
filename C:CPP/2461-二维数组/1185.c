#include <stdio.h>
int main()
{
    int a[3][3];
    int i, n;

    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            scanf("%d", &a[i][n]);
        }
    }

    int sum = 0;
    n = 0;
    for (i = 2; i >= 0; i--)
    {
        sum += a[i][n];
        n++;
    }
    printf("%d\n", sum);
    return 0;
}
