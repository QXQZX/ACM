#include <stdio.h>
int main()
{
    int n, m, i;
    int num[100];
    while (~scanf("%d %d", &n, &m) && (n || m))
    {

        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        num[n] = m;
        for (i = 0; i < n; i++)
        {
            for (m = i + 1; m <= n; m++)
            {
                if (num[i] > num[m])
                {
                    int temp = num[i];
                    num[i] = num[m];
                    num[m] = temp;
                }
            }
        }
        for (i = 0; i <= n; i++)
        {
            if (i == 0)
                printf("%d", num[i]);
            else
                printf(" %d", num[i]);
        }
        printf("\n");
    }
    return 0;
}
