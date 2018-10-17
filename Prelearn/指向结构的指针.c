#include <stdio.h>
struct date
{
    int month;
    int year;
    int day;
} myday;
int main(int argc, char const *argv[])
{
    struct date *p = &myday;

    (*p).month = 12; //与下面的等价
    p->month = 12;   //->表示指针所指的结构变量中的成员
    return 0;
}
//指针来回调用函数
#include <stdio.h>
struct point
{
    int x;
    int y;
};
struct point *getStruct(struct point *p);
void output(struct point);
void print(const struct point *p);
int main()
{
    struct point test = {0, 0};
    getStruct(&test);
    output(test);              //输出test
    output(*getStruct(&test)); //输出getStruct返回的指针的值
    print(getStruct(&test));
    //还可以这样做  强大的指针
    *getStruct(&test) = (struct point){1, 2};
}
struct point *getStruct(struct point *p)
{
    scanf("%d", &p->x);
    scanf("%d", &p->y);
    printf("%d %d", p->x, p->y);
    return p; //结构体可以整体返回值
}
void output(struct point p)
{
    printf("%d %d", p.x, p.y);
}
void print(const struct point *p)
{
    prinf("%d %d", p->x, p->y);
}