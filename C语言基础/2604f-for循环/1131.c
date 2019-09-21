/*#include <stdio.h>
int main()
{
    //求最大公约数 的  辗转相减法
    int a, b, a1, b1;
    int min;
    scanf("%d %d", &a, &b);
    a1 = a, b1 = b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("%d\n%d\n", a, a1 * b1 / a);   //最小公倍数=a*b/最大公约数
    return 0;
}*/

#include <stdio.h>
int main()
{
    //求最大公约数 的  辗转相除法
    int a, b, a1, b1;
    int z;
    scanf("%d %d", &a, &b);
    a1 = a, b1 = b;
    
    while (b != 0)
    {
        z = a % b;
        a = b;
        b = z;
    }
    printf("%d\n%d\n", a, a1 * b1 / a); //最小公倍数=a*b/最大公约数
    return 0;
}