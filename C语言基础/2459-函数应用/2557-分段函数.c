#include <stdio.h>
#include <math.h>
int main()
{
    int T;
    double x, f;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%lf", &x);
        if (x > 0 && x < 10)
        {
            f = log2(x);
        }
        else if (x < 0)
        {
            f = fabs(x) + sin(x);
        }
        else if (x == 0)
        {
            f = 0;
        }
        else if (x >= 10)
        {
            f = pow(x, 2);
        }
        printf("%.2lf\n", f);
    }
    return 0;
}
