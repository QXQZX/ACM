#include <stdio.h>
typedef struct
{
    int name;
    int ac;
} acm;
int main()
{
    int i, j, t, n;
    acm temp, acm[10000];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &acm[i].name, &acm[i].ac);
        }
        for (i = 0; i < n - 1; i++)//冒泡排序
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (acm[j].ac < acm[j + 1].ac)
                {
                    temp = acm[j + 1];
                    acm[j + 1] = acm[j];
                    acm[j] = temp;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d %d\n", acm[i].name, acm[i].ac);
        }
    }
    return 0;
}
