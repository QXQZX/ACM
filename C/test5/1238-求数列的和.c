#include <stdio.h>
#include <math.h>
void f(int n, int m)
{
    int i = 1;
    double sum, t;
    t = n * 1.0;
    for (i = 1; i <= m; i++)
    {
        sum += t;
        t = sqrt(t);
    }
    printf("%.2lf\n", sum);
}
int main()
{
    int m, n;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        f(n, m);
    }
    return 0;
}
