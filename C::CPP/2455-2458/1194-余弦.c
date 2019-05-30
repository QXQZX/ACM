#include <stdio.h>
int main()
{
    int n, i;
    double x, cosx;
    double temp, flag;
    while (scanf("%lf %d", &x, &n) != EOF)
    {
        cosx = 1.0;
        temp = 1.0;
        flag = -1.0;
        for (i = 1; i <= n; i++)
        {
            temp = temp * (x * x) * 1.0 / ((2 * i) * (2 * i - 1));
            cosx += (temp * flag);
            flag = -flag;
        }
        printf("%.4lf\n", cosx);
    }
    return 0;
}
/*#include <stdio.h>
int main()
{
    double x;
    int n;
    while(~scanf("%lf %d", &x, &n))
    {
        double k = 1.0, flag = 1.0, ans = 0.0;
        for(int i = 0; i <= n; i ++)
        {
            if(i != 0)
            {
                k = k*(x*x)*1.0/((2*i)*(2*i-1));
            }
            ans += (k*flag);
            flag = -flag;
        }
        printf("%.4lf\n", ans);
    }
    return 0;
}*/
