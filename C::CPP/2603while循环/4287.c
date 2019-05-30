#include <stdio.h>
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int a, b, c;
    a = m - n;
    b = a / k;
    c = a % k;
    if (b == 0)
        if (m == n)
            printf("%d\n", 0);
        else
            printf("%d\n", 1);
    else if (b > 0 && c > 0)
        printf("%d\n", b + 1);
    else if (b > 0 && c == 0)
        printf("%d\n", b);

    return 0;
}
