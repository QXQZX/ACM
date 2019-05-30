#include <stdio.h>
#include <string.h>
int main()
{
    int i, x;
    char str[100];
    gets(str);
    x = strlen(str);

    for (i = x-1; i >= 0; i--)
    {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}
