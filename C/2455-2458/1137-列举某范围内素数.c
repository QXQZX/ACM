#include <stdio.h>
int main()
{
    int x, i, n;
    scanf("%d", &x);
    int count = 0;
    for (i = 2; i < x; i++)
    {

        for (n = 2; n < x; n++)
        {
            if (i % n == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            count++;
            printf("%d ", i);
            if (count % 10 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}