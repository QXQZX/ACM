//水题
#include <stdio.h>
typedef struct
{
    char name[20]; //在  SDUTOJ上数据有问题   字符长度、数据组数要自己加大
    char home[20];
    int score;
} list;
int main()
{
    list list[1200];
    int n, i;
    while (~scanf("%d", &n))
    {
        for (i = 0; i < n; i++)
        {
            scanf("%s %s %d", list[i].name, list[i].home, &list[i].score);
        }
        for (i = n - 1; i >= 0; i--)
        {
            printf("%s %s %d\n", list[i].name, list[i].home, list[i].score);
        }
    }
    return 0;
}
