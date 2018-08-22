//数组写法    （处用数组）
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
        scanf("%d", &number[cnt]);       //如果%d后面多了\n   就会多输出一个数
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
/*
//另一种 while循环写法
#include <stdio.h>
int main()
{
    int money = 1000000;
    int i;
    int n;
    scanf("%d", &i);
    while (i--)
    {
        scanf("%d", &n);
        if (money % n == 0)
            printf("%d\n", money / n);
        else
            printf("No\n");
    }
    return 0;
}
*/