#include <stdio.h>
int main()
{
    int n, i = 1;
    int cnt = 0;

    scanf("%d", &n);
    while (n)
    {
        n -= i * i;
        if (n >= 0)
            cnt++;
        else
            break;

        i++;
    }
    printf("%d\n", cnt);
    return 0;
}
