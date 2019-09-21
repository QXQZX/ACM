#include <stdio.h>
int main()
{
    int n, a, b, max;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);
        if (a >= b)
            max = a;
        else
            max = b;

        printf("%d\n", max);
    }
    return 0;
}
