#include <stdio.h>
int main()
{
    int num[10];
    int i, n;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        int index = num[0];
        int count = 1;
        for (i = 0; i < n; i++)
        {
            if (num[i] < index)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
