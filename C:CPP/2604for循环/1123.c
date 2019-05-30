#include <stdio.h>
int main()
{
    int n, sum=1;
    scanf("%d", &n);

    if (n == 0)
    {
        n = 1;
    }
    else
    {
        while (n)
        {
            sum *= n;
            n--;
        }
    }
    printf("%d\n", sum);
    return 0;
}