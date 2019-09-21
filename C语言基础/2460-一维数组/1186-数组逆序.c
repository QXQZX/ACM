#include <stdio.h>
int main()
{
    int i, m, n;
    int num[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    scanf("%d", &m);
    int count = 0;
    for (i = n - m; i < n; i++)
    {
        if (i == n - m)
        {
            printf("%d", num[i]);
            count++;
        }
        else
        {
            printf(" %d", num[i]);
        }
    }
    for (i = 0; i < n - m; i++)
    {
        printf(" %d", num[i]);
    }

    printf("\n");
    return 0;
}
