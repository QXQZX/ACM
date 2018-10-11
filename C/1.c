#include <stdio.h>
# include <math.h>
int main()
{
    int i, a, flag = 1;
    scanf("%d", &a);
    for (i = 2; i < sqrt(a); i++)
    {
        if (a % i == 0)
        {
            flag = 0;
        }
    }
    if(flag)
        printf("yes");
    else
        printf("no");
    return 0;
}
