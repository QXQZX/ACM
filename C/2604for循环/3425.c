#include <stdio.h>
int main()
{
    int n, m, i;
    int sum;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        sum = 0;
        for (i = m + 1; i <= n; i++)
        {
            sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}
