#include <stdio.h>
int main()
{
    int n, i, j, a, m = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        a = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                a = 1;
                break;
            }
        }
        if (a == 0)
        {
            printf("%d ", i);
            m++;
            if (m % 10 == 0)
                printf("\n");
        }
    }
    return 0;
}