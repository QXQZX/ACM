#include <stdio.h>
int main()
{
    int n, i;
    int num[100];
    while (scanf("%d", &n) != EOF)
    {
        int count = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        for (i = 1; i < n - 1; i++)
        {
            if (num[i] > num[i - 1] && num[i] > num[i + 1])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
