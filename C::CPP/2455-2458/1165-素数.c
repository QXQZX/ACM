#include <stdio.h>
int main()
{
    int i, n, m = 0;
    int number[100];
    int count = 0;
    for (i = 100; i <= 200; i++)
    {
        for (n = 2; n <= 200; n++)
        {
            if (i % n == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            count++;
            number[m] = i;
            m++;
        }
    }
    printf("%d\n", count);

    for (m = 0; m < count; m++)
    {
        printf("%d ", number[m]);
    }
    return 0;
}