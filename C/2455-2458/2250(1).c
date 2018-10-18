#include <stdio.h>
int main()
{
    int m, n, i, sum = 0;
    scanf("%d", &n);
    int a[n];
    int index, temp;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    for (m = 0; m < n - 1; m++)
    {
        index = m;
        for (i = m + 1; i < n; i++)
        {
            if (a[i] < a[index])
            {
                index = i;
                temp = a[index];
                a[i] = a[m];
                a[m] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

   // printf("%d %d %d", a[n - 1], a[0], sum / n);
    return 0;
}
/*  for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }*/