#include <stdio.h>
int main()
{
    int n, i;
    int sum1 = 0, sum2 = 0;

    scanf("%d", &n);
    int number[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < n; i += 2)
    {
        sum1 += number[i];
    }

    for (i = 1; i < n; i += 2)
    {
        sum2 += number[i];
    }

    if (sum1 > sum2)
    {
        printf("Greater than\n");
    }
    else if (sum1 < sum2)
    {
        printf("Less than\n");
    }
    else if (sum1 = sum2)
    {
        printf("Equal\n");
    }

    return 0;
}
