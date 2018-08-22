#include <stdio.h>
#include <math.h>
double s(double p,double a, double b, double c)
{
    double s;
    s=sqrt((p*(p-a) * (p - b) * (p -c)));
    printf("%.3lf\n", s);
}

int main()
{
    double a, b, c;
    double p;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    p=(a+b+c)/2.0;

    s(p,a,b,c);
    
    return 0;
}
