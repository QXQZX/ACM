#include <stdio.h>
#include <string.h>
int main()
{
    int i, x, cnt = 0;
    char str[100];
    gets(str);
    x = strlen(str);
    if (str[0] >= '0' && str[0] <= '9')
    {
        printf("NO\n");
    }
    else
    {
        for (i = 0; i < x; i++)
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '1' && str[i] <= '9') || (str[i] == '_'))
                cnt++;
        }
        if (cnt == x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
