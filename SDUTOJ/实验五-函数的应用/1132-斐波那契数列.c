#include <stdio.h>
double f(double n)
{
    double value;
    if (n == 1 || n == 2)
    {
        value = 1;
    }
    else if (n >= 3)
    {
        value = f(n - 1) + f(n - 2);
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