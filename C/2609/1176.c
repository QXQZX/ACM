#include <stdio.h>
#include <string.h>
int main()
{
    int i, x;
    char c, str[100];
    gets(str);
    c = getchar();

    x = strlen(str);
    for (i = 0; i < x; i++)
    {
        if (str[i] != c)
            putchar(str[i]);
    }
    printf("\n");
    return 0;
}
