#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    int i, x, A, t, num, others;
    while (gets(str))
    {
        x = strlen(str);
        A = num = t = others = 0;
        for (i = 0; i < x; i++)
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                A++;
            else if (str[i] >= '0' && str[i] <= '9')
                num++;
            else if (str[i] == ' ')
                t++;
            else
                others++;
        }
        printf("%d %d %d %d\n", A, num, t, others);
    }
    return 0;
}
