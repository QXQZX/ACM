#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, i, t;
    int max;
    scanf("%d", &n);
    int number[n];
    int jdz[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
        jdz[i] = abs(number[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            max = jdz[0];
        }
        if (jdz[i] > max)
        {
            max = jdz[i];
            t = i;
        }
    }
    printf("%d", number[t]);
    return 0;
}