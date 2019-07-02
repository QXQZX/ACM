#include <stdio.h>
#include <string.h>
int main()
{
    int i, x, cnt=1;
    char str[100];
    gets(str);
    x=strlen(str);
    for (i = 0; i < x; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
