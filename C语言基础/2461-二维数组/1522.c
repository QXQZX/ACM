#include <stdio.h>
int main()
{
    int n, i, j;
    int a[20][20];
//  原理：判定a[i][j]是否等于a[j][i]
    while (scanf("%d", &n) && n)
    {
        int count = 1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] != a[j][i])
                    count = 0;
            }
        }

        if (count)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
