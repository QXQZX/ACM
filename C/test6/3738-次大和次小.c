#include <stdio.h>
int main()
{
    int T, n, i;
    int num[10000];
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }

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

        printf("%d %d\n", num[n - 2],num[1]);
    }
    return 0;
}
