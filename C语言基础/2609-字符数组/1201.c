//写法一(冒泡排序)：
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char str[3][100], temp[100];
    scanf("%s %s %s", str[0], str[1], str[2]);

    for (i = 1; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (strcmp(str[j], str[i]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[i]);
                strcpy(str[i], temp);
            }
        }
    }

    printf("%s %s %s\n", str[0], str[1], str[2]);
    return 0;
}
//写法二(自定义函数)：
#include <stdio.h>
#include <string.h>
char px(char x[100], char y[100], char z[100]);
int main()
{
    int i, j;
    char str[3][100], temp[100];
    scanf("%s %s %s", str[0], str[1], str[2]);
    px(str[0], str[1], str[2]);

    printf("%s %s %s\n", str[0], str[1], str[2]);
    return 0;
}
char px(char x[100], char y[100], char z[100])
{
    char temp[100];
    if (strcmp(x, y) > 0)
    {
        strcpy(temp, x);
        strcpy(x, y);
        strcpy(y, temp);
    }
    if (strcmp(x, z) > 0)
    {
        strcpy(temp, x);
        strcpy(x, z);
        strcpy(z, temp);
    }
    if (strcmp(y, z) > 0)
    {
        strcpy(temp, y);
        strcpy(y, z);
        strcpy(z, temp);
    }
    return x, y, z;
}