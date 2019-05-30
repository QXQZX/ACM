#include <stdio.h>
#include <string.h>
int main()
{
    char line[80];
    int x, i;
    while (gets(line))
    {
        x = strlen(line);//计算字符数组中字符个数  配合string使用
        for (i = 0; i < x; i++)
        {
            if (line[i] >= 'a' && line[i] <= 'z')
                putchar(line[i] - 32);
            else if (line[i] >= 'A' && line[i] <= 'Z')
                putchar(line[i] + 32);
            else
                putchar(line[i]);
        }
        printf("\n");
    }
    return 0;
}
