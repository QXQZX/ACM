#include <stdio.h>
void abs(double n)
{
    if (n >= 0)
    {
        printf("%.2lf\n", n);
    }
    else if (n < 0)
    {
        n = -n;
        printf("%.2lf\n", n);
    }
}
int main()
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        abs(n);
    }
    return 0;
}
