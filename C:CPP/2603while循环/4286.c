#include <stdio.h>
int main()
{
    int sum=0, m, n;
    scanf("%d", &n);
    
    while (n)
    {
        m = n % 10;
        if (m % 2 == 0)
            sum += m;
        n /= 10;
    }
    
    printf("%d\n", sum);
    return 0;
}
