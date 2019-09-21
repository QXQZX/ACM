#include <stdio.h>
int main()
{
    int a[5];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        a[i] = n % 10;
        n = n / 10;
        if (n == 0)
        {
            break;
        }
    }

    printf("%d\n", i + 1);
    n = i;

    for (i = n; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d\n", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    for (i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf(" %d", a[i]);
        }
    }
    printf("\n");
    return 0;
}