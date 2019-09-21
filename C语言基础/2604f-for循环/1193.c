#include <stdio.h>
int main()
{
    int a = 1, b = 1;
    double n, pi = 0;
    scanf("%lf", &n);
    n = 4 * n - 1;

    while (b <= n)
    {
        pi += 1.0 * a / b;
        a = -a;
        b += 2;
    }
    printf("%.5lf\n", 4 * pi);
    return 0;
}
