#include <stdio.h>
int main()
{
    int a, n, sum = 0;
    scanf("%d\n%d", &a, &n);
    int t = a;
    for (int i = 0; i < n; i++)
    {
        sum += a;
        a = a * 10 + t;
    }
    printf("%d\n", sum);
    return 0;
}
