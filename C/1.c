#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d\n", &n);
        int a;
        a = 1000000 % n;
        if (a == 0)
            printf("%d\n", 1000000 / n);
        else
            printf("No\n");
    }
    return 0;
}
