#include <stdio.h>
#include <string.h>
int main()
{
    char str1[15], str2[15];
    gets(str1);
    gets(str2);
    
    if (strcmp(str1, str2) < 0)
        printf("%s<%s\n", str1, str2);
    else if (strcmp(str1, str2) == 0)
        printf("%s=%s\n", str1, str2);
    else if (strcmp(str1, str2) > 0)
        printf("%s>%s\n", str1, str2);
    return 0;
}
