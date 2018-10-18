#include <stdio.h>
#include <math.h>
int main()
{
    int R, n;
    double s;
    scanf("%d", &R);
    scanf("%d", &n);
    int a = pow(2, n - 1);
    s = pow(R / a, 2);
    printf("%.0lf\n", s);
    return 0;
}
