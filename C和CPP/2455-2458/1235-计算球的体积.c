#include <stdio.h>
#include <math.h>
int main()
{
    const double PI = 3.1415927;    //带小数点的要用双精度
    double r, v;

    while (scanf("%lf", &r) != EOF)   //使用lf  不要使用f
    {
        r = pow(r, 3);
        v = 4.0 * PI * r / 3.0;         //不能写成4.0/3.0*PI*r
        printf("%.3lf\n", v);            //使用lf  不要使用f
    }

    return 0;
}
/*
#include <stdio.h>
#define PI 3.1415927
int main()
{
    double r, v;
    while (scanf("%lf", &r) != EOF)
    {
        v = 4.0 * PI * r * r * r / 3.0;
        printf("%.3lf\n", v);
    }
    return 0;
}
*/