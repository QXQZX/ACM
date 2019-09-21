#include <stdio.h>
int main()
{
    int n, m;
    int i, j, l;
    int a[10][10];

    while (scanf("%d %d", &n, &m) != EOF)
    {
        int t = 1;
        //输入(把三行四列 按 四列三行输入)
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                a[i][j] = t;
                t++;
            }
            i++;
            for (l = j - 1; l >= 0; l--)
            {
                a[i][l] = t;
                t++;
            }
        }
        //输出（一列一列输出）
        for (j = 0; j < n; j++)
        {
            for (i = 0; i < m; i++)
            {
                if (i == m - 1)
                    printf("%02d\n", a[i][j]);
                else
                    printf("%02d ", a[i][j]);
            }
        }
    }
    return 0;
}
