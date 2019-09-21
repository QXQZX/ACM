#include <stdio.h>
int main()
{
    int i, n, max, min;
    int smax, smin, t;
    int a[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            smin = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            smax = i;
        }
    }

    t = a[smax];
    a[smax] = a[n - 1];
    a[n - 1] = t;

    t = a[smin];
    a[smin] = a[0];
    a[0] = t;

    for (i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%d", a[i]);
        else
            printf(" %d", a[i]);
    }
    return 0;
}
