#include <stdio.h>
int is_triangle(int a, int b, int c);  //判断是否符合三角形规则
void reallist(int *a, int *b, int *c); //对三边A,B,C进行排序
void swap(int *x, int *y);             //交换函数
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    reallist(&a, &b, &c); //对三边A,B,C进行排序
    if (is_triangle(a, b, c))
    {
        if (a * a + b * b == c * c)
            printf("这是一个直角三角形\n");
        else if (a == b || b == c) //有2，2，3和1，2，2两种情况
            printf("这是一个等腰三角形\n");
        else
            printf("这是一个普普通通的三角形\n");
    }
    else
        printf("他不能构成三角形\n");

    return 0;
}
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void reallist(int *a, int *b, int *c)
{
    if (*a > *b)
        swap(a, b);
    if (*a > *c)
        swap(a, c);
    if (*b > *c)
        swap(b, c);
}
int is_triangle(int a, int b, int c)
{
    if (a + b > c)
        return 1;
    else
        return 0;
}