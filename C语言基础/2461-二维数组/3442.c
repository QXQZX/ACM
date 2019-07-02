#include <stdio.h>
int main()
{
    int n, j, i, m;
    int a[101][101];
    while (scanf("%d %d", &n, &m) != EOF)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int c, b;
        scanf("%d %d", &b, &c);
        int max, temp;

        temp = max = a[b][c];
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (a[i][j] > max)
                {
                    max = a[i][j];
                }
            }
        }

        printf("%d\n", max - temp);
    }
    return 0;
}
