/*Problem Description
//从键盘输入三个整数a、b、c，要求将输出的数据按从大到小排序后输出。
Input
从键盘上输入三个整数a、b、c，每个整数之间用空格分开。
Output
从大到小顺序输出a、b、c的值。*/

#include <stdio.h>
int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (c > b)
    {
        t = c;
        c = b;
        b = t;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}

//原理：代换    让字母靠前的带换成大的数字
