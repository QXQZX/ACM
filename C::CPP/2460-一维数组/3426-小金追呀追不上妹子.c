#include <stdio.h>
int main()
{
    int m, n, i;
    int num[1000];

    while (scanf("%d %d", &n, &m) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
//注意有排序
        for (i = 0; i < n - 1; i++)
        {
            for (int m = i + 1; m < n; m++)
            {
                if (num[i] > num[m])
                {
                    int t = num[i];
                    num[i] = num[m];
                    num[m] = t;
                }
            }
        }

        int sum = 0;
        for (i = n - 1; i >= n - m; i--)
        {
            sum += num[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}
