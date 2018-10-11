#include <stdio.h>
#include <string.h>
int main()
{
    int i, x;
    char str[10000];
    while (gets(str))
    {
        int cnt = 1;
        x = strlen(str);
        for (i = 0; i < x; i++)
        {
            if (str[i + 1] == str[i])
                cnt++;
            else
            {
                if (cnt == 1)
                {
                    printf("%c", str[i]);
                }
                else
                {
                    printf("%d%c", cnt, str[i]);
                }
                cnt = 1;
            }
        }
        printf("\n");
    }

    return 0;
}
