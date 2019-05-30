#include <stdio.h>
int main()
{
    int m, n, i;
    int num[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (m = 0; m < n; m++)
        {
            if (m == n - 1)
                printf("%d\n", num[m]);
            else
                printf("%d ", num[m]);
        }

        int temp = num[n - 1];

        for (m = n - 1; m > 0; m--)
        {
            num[m] = num[m - 1];
        }

        num[0] = temp;
    }

    return 0;
}
