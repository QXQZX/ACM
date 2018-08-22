#include <stdio.h>
int main()
{
    int n, i, m;
    scanf("%d\n", &n);
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (m = i + 1; m < n; m++)
        {
            if (num[i] > num[m])
            {
                int t = num[i];
                num[i] = num[m];
                num[m] = t;
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
    return 0;
}
