#include <stdio.h>
int main()
{
    int n, i, num;
    while (scanf("%d", &n) && n)
    {
        int sum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }
    return 0;
}
