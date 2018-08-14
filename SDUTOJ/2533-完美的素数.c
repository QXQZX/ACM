#include <stdio.h>
int main()
{
    int n, i, sum;
    while (~scanf("%d", &n))
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            sum = 0;
            while (n > 0)
            {
                sum += n % 10;
                n = n / 10;
                //            printf("%d\n",sum);
            }
            for (i = 2; i <= sum; i++)
            {
                if (sum % i == 0)
                {
                    break;
                }
            }
            if (i == sum)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
