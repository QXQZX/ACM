#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, x;
    char str[10000];
    while (~scanf("%d", &n))
    {
        getchar();
        gets(str);
        for (i = 0; i < strlen(str); i++)
        {
            x = n % 26;
            if (x > 0)
            {
                while (x--)
                {
                    if (str[i] == 'a')
                        str[i] = 'z';
                    else if (str[i] == ' ')
                        ;
                    else
                        str[i]--;
                }
            }

            else if (x < 0)
            {
                while (x++)
                {
                    if (str[i] == 'z')
                        str[i] = 'a';
                    else if (str[i] == ' ')
                        ;
                    else
                        str[i]++;
                }
            }
        }
        puts(str);
    }
    return 0;
}
