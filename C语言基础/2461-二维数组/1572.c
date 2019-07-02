#include <stdio.h>
int main()
{
    int T, m, n;
    int i, j, t = 1;
    int a[100][100];
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &m, &n);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Case #%d:\n", t);

        for (i = 0; i < n; i++)
        {
            for (j = m - 1; j >= 0; j--)
            {
                if (j == 0)
                    printf("%d\n", a[j][i]);
                else
                    printf("%d ", a[j][i]);
            }
        }
        t++;
    }
    return 0;
}
