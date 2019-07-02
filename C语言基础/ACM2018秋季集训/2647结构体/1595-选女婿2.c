#include <stdio.h>
struct list
{
    char str[20];
    int height;
};
int main()
{
    struct list ss[100], temp[10], list[100];
    int n, t, i, j = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", ss[i].str, &ss[i].height); //字符串就是地址不要写成  &ss[i].str再取地址
    }
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    for (i = 0; i < n; i++)
    {
        if ((ss[i].height >= a && ss[i].height <= b))
            list[j++] = ss[i];
    }
    if (j)
    {
        for (i = 1; i < j; i++)
        {
            for (t = 0; t < j - 1; t++)
            {
                if (list[i].height < list[t].height)
                {
                    temp[0] = list[i];
                    list[i] = list[t];
                    list[t] = temp[0];
                }
            }
        }
        for (i = 0; i < j; i++)
        {
            printf("%s %d\n", list[i].str, list[i].height);
        }
    }
    else
        printf("No\n");
    return 0;
}
