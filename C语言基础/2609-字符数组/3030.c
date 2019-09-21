#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, i, j;
    char str1[100][10], str2[100][10];
    char str[100][10];
    while (~scanf("%d %d", &n, &m))
    {
        getchar();//收纳回车
        for (i = 0; i < n; i++)
        {
            gets(str1[i]);
        }
        for (i = 0; i < m; i++)
        {
            gets(str2[i]);
        }
        int flag = 0;
        for (i = 0; i < n; i++)  //判断并找出相同的字符串
        {
            for (j = 0; j < m; j++)
            {
                if (strcmp(str1[i], str2[j]) == 0)
                {
                    strcpy(str[flag], str1[i]);
                    flag++;
                    break;
                }
            }
        }
        if (flag)
        {
            char temp[100][10];
            //冒泡排序
            for (i = 1; i < flag; i++)
            {
                for (j = 0; j < flag - 1; j++)
                {
                    if (strcmp(str[i], str[j]) > 0)
                    {
                        strcpy(temp[j], str[i]);
                        strcpy(str[i], str[j]);
                        strcpy(str[j], temp[j]);
                    }
                }
            }
            for (i = flag - 1; i >= 0; i--)
            {
                puts(str[i]);
            }
        }
        else
            printf("sad!\n");
    }
    return 0;
}
