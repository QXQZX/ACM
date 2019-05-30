/*#include <stdio.h>
double A(int n, int m)
{
    int i, count = 1;
    double A = 1;
    for (i = n; count <= m; i--)
    {
        A *= i;
        count++;
    }
    return A;
}
int C(int n, int m)
{
    int t1, t2, C;
    t1 = A(n, m);
    t2 = A(m, m);
    C = t1 / t2;
    return C;
}

int main()
{
    int n, m;
    double a, c;
    while (scanf("%d %d", &n, &m) != EOF)
    {

        a = A(n, m);
        c = C(n, m);

        printf("%.0lf %.0lf\n", a, c);
    }
    return 0;
}
*/
#include <stdio.h>
double A(int n)           //如果是void A(int n)   则无return返回值   如果想有返回值必须定义出变量形
{
    int i;
    double A = 1;
    for (i = n; i > 0; i--)
    {
        A *= i;
    }
    return A;
}

int main()
{
    int n, m, count = 1;
    double a1, a2, c1;

    while (scanf("%d %d", &n, &m) != EOF)
    {

        a1 = A(n);
        a2 = A(n - m);
        c1 = A(m);

        printf("%.0lf %.0lf\n", a1 / a2, a1 / (a2 * c1));
        count++;
        if (count >= 250)
        {
            break;
        }
    }
    return 0;
}