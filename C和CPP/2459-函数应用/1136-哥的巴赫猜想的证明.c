/*#include <stdio.h>
int f(int t)
{
    int m;
    for (m = 2; m <= t; m++)
    {
        if (t % m == 0)
        {
            if (t == m)
            {
                return 1;
            }
            else
                return 2;
        }
    }
}
int main()
{
    int t, m, n, i;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        int x;
        for (x = 2; x <= i; x++)
        {
            if (i % x == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            t = n - i;
            m = f(t);
            if (m == 1)
            {
                printf("%d=%d+%d\n", n, i, t);
                break;
            }
        }
    }
    return 0;
}*/
//写法二：
#include <stdio.h>
#include <math.h>
int prime(int t)
{
    int m;
    for (m = 2; m <= sqrt(t); m++)
    {
        if (t % m == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (prime(i) && prime(n - i))
        {
            printf("%d=%d+%d\n", n, i, n - i);
            break;
        }
    }
    return 0;
}