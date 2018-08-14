#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, i;
    int a, b, c;
    int sum = 0;
    int temp;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        temp = 0;
        for (i = m; i <= n; i++)
        {
            a = i / 100;
            b = i % 100 / 10;
            c = i % 10;
            sum = pow(a, 3) + pow(b, 3) + pow(c, 3);
            if (i == sum)
            {
                temp++;
                if (temp == 1)
                {
                    printf("%d", i);
                }
                else
                {
                    printf(" %d", i);
                }
            }
        }
        if (temp == 0)
        {
            printf("no");
        }
        printf("\n");
    }
    return 0;
}
