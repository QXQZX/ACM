#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double num,temp;
    while (~scanf("%d", &n) && n)
    {
        if (n == 1 || n == 2)
        {
            printf("%d\n", n);
            continue;
        }
        if (n % 3 == 0)
        {
            num = n / 3;
            temp = pow(3.0, num);
        }
        else if (n % 3 == 1)
        {
            num = n / 3 - 1;
            temp = pow(3.0, num) * 4.0;
        }
        else
        {
            num = n / 3;
            temp = pow(3.0, num) * 2.0;
        }
        printf("%.0lf\n", temp);
    }
    return 0;
}