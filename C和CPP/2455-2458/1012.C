//A+B for Input-Output Practice (III)
#include <stdio.h>
int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) && (a || b))
    {
        printf("%d\n", a + b);
    }

    return 0;
}