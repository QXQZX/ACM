#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][20], cpy[20];
    int score[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        gets(name[i]);
    }
    int t = 1;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
    }
    for (i = 1; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (strcmp(name[i], name[j]) < 0)
            {
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;
                strcpy(cpy, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], cpy);
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%s,%d\n", name[i], score[i]);
    }
    return 0;
}
