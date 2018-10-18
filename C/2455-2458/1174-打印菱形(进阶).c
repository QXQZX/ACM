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
        for (t = 1; t <= i; t++)
        {
            if (i == 1)
            {
                printf("*");
            }
            else if (t == i)
            {
                printf("*");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for (i = n - 1; i > 0; i--)
    {
        for (m = i; m < n; m++)
        {
            printf(" ");
        }
        for (t = i; t > 0; t--)
        {
            if (t == 1)
            {
                printf("*");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
