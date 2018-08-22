#include <stdio.h>
int main()
{
    int n, i, m, t;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (m = i; m < n; m++)
        {
            printf(" ");
        }
        for (t = 1; t <= 2 * i - 1; t++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i > 0; i--)
    {
        for (m = i; m < n; m++)
        {
            printf(" ");
        }
        for (t = 2 * i - 1; t > 0; t--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
