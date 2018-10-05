#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, x;
    char str[100];
    gets(str);
    x = strlen(str);
    x--;
    while (i < x)
    {
        if (str[i] != str[x])
            break;
        i++;
        x--;
    }
    if (i >= x)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
