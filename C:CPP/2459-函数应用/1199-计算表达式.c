#include <stdio.h>
#include <math.h>
double f(double x, int n)
{
    double value;
    if (n == 1)
    {
        value = sqrt(n + x);
    }
    else
    {
        value = sqrt(n + f(x, n - 1));
    }
    return value;
}
int main()
{
    double x, value;
    int n;
    scanf("%lf %d", &x, &n);

    value = f(x, n);

    printf("%.2lf\n", value);

    return 0;
}
