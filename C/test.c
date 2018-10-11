#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, i, t;
    while (scanf("%d", &a) != EOF)
    {
        int flag = 1, sign = 1, s = 0;
        for (i = 2; i < sqrt(a); i++)
        {
            if (a % i == 0 && a != 2)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            while (a != 0)
            {
                b = a % 10;
                a /= 10;
                s = s + b;
            }

            for (t = 2; t < s; t++)
            {
                if (s % t == 0)
                    break;
            }
            if (s == t)
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
