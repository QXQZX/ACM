#include <stdio.h>
// #define <名字> <值>
#define PI 3.1415926
#define format "%f\n"
#define PI2 2 * PI
//定义没有值的宏
#define _DEBUG
//定义宏的计算
#define cube(x) ((x) * (x) * (x)) //注：一切宏的运算都要加括号  否则必错
//定义多输出的宏
#define PRT            \
    printf("%f ", PI); \
    printf("%f\n", PI2) //两个输出之间要用反斜杠隔开
int main()
{
    printf("%d", cube(5)); //类似于函数  用5去替换宏中的x  直接当函数也行  5也可以是输入的变量，亦可以对变量进行加减运算
    PRT;
    printf("%f\n", 2 * PI * 3.0);
    printf("%f\n", PI2 * 3.0);
    printf(format, PI2 * 3.0);
    return 0;
}
/*
#define 预定义的宏
__LINE__ 输出当前行的行号 printf("%d", __LINE__);
__FILE__ 输出当前文件名 printf("%s", __FILE__);
__DATE__ 输出编译的日期 printf("%s", __DATE__);
__TIME__ 输出编译的时间 printf("%s", __DATE__);
__STDC__
*/