#include <stdio.h>
double C(double n, double m)
{
    double value;
    if (m == 0)
    {
        value = 1;
    }
    else if (n == 1)
    {
        value = 1;
    }
    else if (m == n)
    {
        value = 1;
    }
    else
    {
        value = C(n - 1, m - 1) + C(n - 1, m);
    }
    return value;
}
int main()
{
    int N;
    double a,n,m;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%lf %lf", &n, &m);
        a = C(n, m);
        printf("%.0lf\n", a);
    }
    return 0;
}
