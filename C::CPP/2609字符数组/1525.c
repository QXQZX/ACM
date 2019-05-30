#include <stdio.h>
#include <string.h>
int main()
{
    int a[150];
    char str[100];
    int x, i;
    while (gets(str))
    {
        memset(a, 0, sizeof(a)); //将数组内的元素全部初始化为0；
        int k, max = 0;
        x = strlen(str);
        for (i = 0; i < x; i++)
        {
            if (str[i] == ' ')
                continue;
            else
                a[str[i]]++;//对应字符str[i]的ascll码
        }
        for (i = 0; i < 150; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                k = i;
            }
        }
        printf("%c %d\n", k, max);
    }
    return 0;
}
