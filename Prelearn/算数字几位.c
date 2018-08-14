#include <stdio.h>
int main()
{
    //代码兼顾0
    int a;
    int n = 0;
    scanf("%d", &a);
    n++;
    a /= 10;
    while (a > 0)
    {
        n++;
        a /= 10;
        //     每次循环输出结果   printf("a=%d,n=%d",a,n);
    }
    printf("该数字为%d位数。\n", n);
    return 0;
}

//代码不兼顾0
/*
{
    int a;
    int n = 0;
    scanf("%d", &a);
    n++;
    a /= 10;
    while (a > 0)
    {
        n++;
        a /= 10;
        //     每次循环输出结果   printf("a=%d,n=%d",a,n);
    }
    printf("该数字为%d位数。\n", n);
    return 0;
}

// do-while实现
{
    int x;
    scanf("%d", &a);
    int n = 0;
    do
    {
        a /= 10;
        n++;
    } while (a > 0);
    printf("该数字为%d位数。\n", n);
    return 0;
}*/