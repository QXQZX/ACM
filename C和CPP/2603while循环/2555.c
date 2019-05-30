#include <stdio.h>
int main()
{
    int cnt = 0, i;
    int b;

    scanf("%d", &i);
    int number[i];

    cnt = 0;
    while (cnt < i)
    {
        scanf("%d", &number[cnt]);
        cnt++;
    }

    for (b = 0; b < cnt; b++)
    {
        if (1000000 % number[b] == 0)
        {
            printf("%d\n", 1000000 / number[b]);
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}