#include <stdio.h>
#include <string.h>
int main()
{
    int x, i;
    char str[6];
    gets(str);
    x = strlen(str);

    for (i = 0; i < x; i++)
    {
        str[i] += 4;
    }
    str[5] = '\0';
    printf("password is %s\n", str);
}
