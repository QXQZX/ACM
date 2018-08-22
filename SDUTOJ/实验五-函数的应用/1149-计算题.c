#include <stdio.h>
double f(double m, double n) //int也可以的
{
    double value;
    if (m == 1)
    {
        value = n;
    }
    else if (n == 1)
    {
        value = m;
    }
    else if (m > 1 && n > 1)
    {
        value = f(m - 1, n) + f(m, n - 1); //递归  函数自己调用自己
    }
    return value;
}
int main()
{
    double m, n, a;
    int T;
    scanf("%d", &T);
    while (T)
    {
        scanf("%lf %lf", &m, &n);
        a = f(m, n);
        printf("%.0lf\n", a);
        T--;
    }
    return 0;
}
