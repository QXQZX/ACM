#include <stdio.h>
double f(double n)
{
    double value;
    if (n == 1)
    {
        value = 2;
    }
    else if (n == 2)
    {
        value = 3;
    }
    else if (n == 3)
    {
        value = 5;
    }
    else if (n >= 4)
    {
        value = f(n - 1) + f(n - 2) - f(n - 3);
    }
    return value;
}
int main()
{
    double a;
    int n;
    scanf("%d", &n);

    a = f(n);
    printf("%.0lf\n", a);

    return 0;
}