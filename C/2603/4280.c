#include <stdio.h>
int main()
{
    int n, m, t = 0;
    scanf("%d %d", &n, &m);

    while (n)
    {
        if (n % 10 == m)
            t++;
        n /= 10;
    }
    printf("%d\n", t);
    return 0;
}
