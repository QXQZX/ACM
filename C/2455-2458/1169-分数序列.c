#include <stdio.h>
int main()
{
    int n, i;
    double child = 2, parent = 1, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += child / parent;
        child += parent;
        parent = child - parent;
    }

    printf("%.6lf", sum);
    return 0;
}
