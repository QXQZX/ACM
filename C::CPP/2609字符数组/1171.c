#include <stdio.h>
#include <string.h>
int main()
{
    char str1[80], str2[80];
    int i, x, j = 0;
    gets(str1);
    x = strlen(str1);
    for (i = 0; i < x; i++)

    {
        if (str1[i] >= '0' && str1[i] <= '9')
        {
            str2[j] = str1[i];
            j++;
        }
        else if (str2[j - 1] != '*')
        {
            str2[j] = '*';
            j++;
        }
    }
    str2[j] = '\0';
    puts(str2);

    return 0;
}
