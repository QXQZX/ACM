#include <stdio.h>
#include <string.h>
int main()
{
    int i, x;
    char c, str[1000];

    while (scanf("%s %c", str, &c) != EOF)  //%s  字符串型
    {
        x = strlen(str);
        for (i = 0; i < x; i++)
        {
            if (str[i] == c)
                printf("\n");
            else
                putchar(str[i]);
        }
        printf("\n");
    }
    return 0;
}
