#include <stdio.h>
#include <math.h>
double f(double a, double b, double c)
{
    double x1;
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    return x1;
}
double F(double a, double b, double c)
{
    double x2;
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    return x2;
}
int main()
{
    double a, b, c;
    double x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);

    x1 = f(a, b, c);
    x2 = F(a, b, c);

    if (x2 > x1)
    {
        double t = x1;
        x1 = x2;
        x2 = t;
    }
    printf("%.2lf %.2lf\n", x1, x2);
    return 0;
}
