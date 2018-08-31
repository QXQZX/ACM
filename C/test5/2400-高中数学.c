#include <stdio.h>
double f(double n)
{
    double value;
    if (n == 1)
    {
        value = 0;
    }
    else if (n == 2)
    {
        value = 1;
    }
    else if (n >= 3)
    {
        value = 4 * f(n - 1) - 5 * f(n - 2);
    }
    return value;
}
int main()
{
    double a, n;
    int T;
    scanf("%d", &T);
    while (T)
    {
        scanf("%lf", &n);
        a = f(n);
        printf("%.0lf\n", a);
        T--;
    }
    return 0;
}