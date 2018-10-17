#include <stdio.h>
struct date
{ //定义某个结构体
    int month;
    int day; //结构变量不是像数组那样是地址
    int year;
};
int main()
{
    struct date today;
    today = (struct date){07, 31, 2018}; //强制类型转换  +  结构初始化

    struct date day;
    day.year = 2015;

    day = today; //  将today结构中的所有变量值赋值给day中的  数组无法做到
    printf("Today's date is %i-%i-%i\n", today.year, today.month, today.day);
    printf("The day's date is %i-%i-%i\n", day.year, day.month, day.day); //结构体用%i输出
    return 0;
}
/*    struct
    {
        int x, y;
    } s[2] = {
        {1, 3},
        {2, 7},
    };
    printf("%d\n", s[0].y / s[1].x);   可以添加数组*/
#include <stdio.h>
struct point
{
    int x;
    int y;
};
struct point getStruct();
void output(struct point);
int main()
{
    struct point y = {0, 0};
    y = getStruct();
    output(y);
}
struct point getStruct()
{
    struct point p;
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    printf("%d %d", p.x, p.y);
    return p; //结构体可以整体返回值
}
void output(struct point p)
{
    printf("%d %d", p.x, p.y);
}