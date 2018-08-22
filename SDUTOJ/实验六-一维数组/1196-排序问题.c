#include <stdio.h>
int main()
{
    const int n = 10;
    int i, m, t = 1;
    int num[n], cnt[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        cnt[i] = t;
        t++;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (m = i + 1; m < n; m++)
        {
            if (num[i] > num[m])
            {
                int tem = num[i];
                num[i] = num[m];
                num[m] = tem;
                tem = cnt[i];
                cnt[i] = cnt[m];
                cnt[m] = tem;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d", num[i]);
        }
        else
        {
            printf(" %d", num[i]);
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d", cnt[i]);
        }
        else
        {
            printf(" %d", cnt[i]);
        }
    }
    printf("\n");

    return 0;
}