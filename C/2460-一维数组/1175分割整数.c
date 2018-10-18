#include <stdio.h>
int main()
{
    int a[10]; //从键盘输入一个长整数（不超过10位），从高位开始逐位分割并输出。//   指出数组大小即可
    long n;
    int i;
    scanf("%ld", &n);
    for (i = 0; i < 10; i++)
    {
        a[i] = n % 10;
        n = n / 10;
        if (n == 0)
        {
            break;
        }
    }
    n = i;
    for (i = n; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d\n", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
