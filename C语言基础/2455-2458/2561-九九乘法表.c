#include <stdio.h>
int main()
{
    int m, n, i;
    while (scanf("%d", &n) != EOF)
    {
        for (m = 1; m <= n; m++)
        {
            for (i = 1; i <= m; i++)
            {
                if (i == 1)
                {
                    printf("%d*%d=%d", i, m, i * m);
                }
                else
                {
                    printf(" %d*%d=%d", i, m, i * m);
                }
                if (i == m)
                {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
