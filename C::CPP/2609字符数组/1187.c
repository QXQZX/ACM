#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, x;
    char str[100];
    gets(str);
    x = strlen(str);

    for (i = 0; i < x; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= '0' && str[i] <= '9')
            str[i] = 105 - str[i];
    }
    for (i = x - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}
