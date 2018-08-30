#include <stdio.h>
int main()
{
    int a[31][31];
    int i, j, n;
    
    while (scanf("%d", &n) && n)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                if (j == i)
                    printf("%d\n", a[i][j]);
                else
                    printf("%d ", a[i][j]);
            }
        }
        //若不加下面的\n会报Presentation Error
        printf("\n");
    }

    return 0;
}
