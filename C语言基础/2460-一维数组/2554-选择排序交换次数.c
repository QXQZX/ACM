#include <stdio.h>
int main()
{
    int T, i, m;
    scanf("%d", &T);
    int num[100];
    while (T--)
    {
        int n;
        int count = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }

        for (i = 0; i < n - 1; i++)//选择排序
        {
            for (m = i + 1; m < n; m++)
            {
                if (num[i] > num[m])
                {
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}