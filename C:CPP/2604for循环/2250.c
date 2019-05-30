#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    int max, min, m;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        sum = sum + m;
        if (i == 0)
        {
            max = m;
            min = m;
        }
        if (m > max)
        {
            max = m;
        }
        if (m < min)
        {
            min = m;
        }
    }

    printf("%d %d %d\n", max, min, sum / n);
    return 0;
}