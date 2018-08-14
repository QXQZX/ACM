#include <stdio.h>
void sum(int begin, int end)
{
    int i;
    int sum = 0;
    for (i = begin; i <= end; i++)
    {
        sum += i;
    }
    printf("%d到%d的和是%d", begin, end, sum);
}

int main()
{
    sum(20, 30); //不能调用变量 int a= 7;int b=8; sum(a,b)       //只能调用值sum(20, 30)
    return 0;
}

//调用求最大值函数            多出口
/*
#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    printf("%d", max(5, 6));

    return 0;
}
*/

//或者这样
/*#include <stdio.h>
void sum(int begin, int end) //函数的声明（函数原型） 告诉编译器有这个自定义函数

void sum(int , int )   其实也不用定义变量名称  编译器只检查参数类型并不会检查参数名称

int main()
{
    sum(20, 30);          如果函数里是浮点  数字将自动更换为浮点
    return 0;
}

void sum(int begin, int end) //函数的定义
{
    int i;
    int sum = 0;
    for (i = begin; i <= end; i++)
    {
        sum += i;
    }
    printf("%d到%d的和是%d", begin, end, sum);
}
*/