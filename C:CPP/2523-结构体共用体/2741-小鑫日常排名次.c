#include <stdio.h>
typedef struct
{
    char str[10];
    int score;
} list;
int main()
{
    list temp, list[50];
    int n, i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", list[i].str, &list[i].score);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (list[i].score < list[j].score)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s %d\n", list[i].str, list[i].score);
    }
    return 0;
}
