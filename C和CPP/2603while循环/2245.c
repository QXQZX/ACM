#include <stdio.h>
#include <math.h>
int main()
{
    int a,n, sum=0;
    scanf("%d", &n);
    int t;
    t = n * n * n;
    
    while (t)
    {
        a = t % 10;
        sum += a*a*a;
        t /= 10;
    }
    printf("%d\n",sum);
    return 0;
}