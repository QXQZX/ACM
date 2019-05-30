#include <stdio.h>
#include <string.h>
int main()
{
    int x, i;
    char str[100];
    while (gets(str))
    {
        x = strlen(str);
        for (i = 0; i < x; i++)
        {
            if (str[i] >= 'A' && str[i] < 'Z')
            {
                str[i] += 33;
            }
            else if (str[i] == 'Z')
            {
                str[i] = 'a';
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                if (str[i] >= 97 && str[i] <= 99)
                    str[i] = '2';
                if (str[i] >= 100 && str[i] <= 102)
                    str[i] = '3';
                if (str[i] >= 103 && str[i] <= 105)
                    str[i] = '4';
                if (str[i] >= 106 && str[i] <= 108)
                    str[i] = '5';
                if (str[i] >= 109 && str[i] <= 111)
                    str[i] = '6';
                if (str[i] >= 112 && str[i] <= 115)
                    str[i] = '7';
                if (str[i] >= 116 && str[i] <= 118)
                    str[i] = '8';
                if (str[i] >= 119 && str[i] <= 122)
                    str[i] = '9';
            }
        }
        puts(str);
    }
    return 0;
}
