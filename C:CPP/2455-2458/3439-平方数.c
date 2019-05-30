#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, i, temp;
    int a, b, t, sum;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            t = a;
            a = b;
            b = t;
        }
        for (m = a; m <= b; m++)
        {
            temp = sqrt(m);
            if (temp * temp == m)
            {
                sum += m;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}

/*#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    int n,m;
    int i;
    int temp;
    int sum;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d%d",&n,&m);
        if(n > m)
        {
            temp = n;
            n = m;
            m = temp;
        }
        for(i = n; i <= m; i++)
        {
            temp = sqrt(10);
            if(temp * temp == i)
                sum += i;
        }
        printf("%d\n",sum);
    }
    return 0;
}*/
