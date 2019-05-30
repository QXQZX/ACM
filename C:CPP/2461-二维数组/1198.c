#include <stdio.h>
int main()
{
    int m, n, max;
    int i, j, b;
    int a[10][10];

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int temp, temps, t;

    for (i = 0; i < m; i++)
    {
        max = a[i][0];
        for (j = 1; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                temp = j;
                temps = i;
            }
        }
        t = 1;
        for (b = 0; b < m; b++)
        {
            if (b == temps)
                continue;
            if (a[b][temp] <= max)
                t = 0;
        }
        if (t == 1)
        {
            printf("Array[%d][%d]=%d\n", temps, temp, max);
            break;
        }
    }
//小技巧
    if (t == 0)
        printf("None\n");

    return 0;
}
