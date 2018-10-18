#include <stdio.h>
int main()
{
    int i, j, a, b;
    int n, t;
    while (~scanf("%d", &n))
    {

        if (n % 2 == 1 || n == 1 || n == 2)
        {
            printf("Yes!\n");
        }
        else if ((n % 2 % 2 == 0) && (n % 3 != 0))
        {
            printf("Yes!\n");
        }
        else if (n % 6 == 0)
            printf("No!\n");
    }
    return 0;
}
