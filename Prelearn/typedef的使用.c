# include <stdio.h>
typedef struct node {
    int month;
    int day;
    int year;
} anode;//把结构struct node这个结构重命名为    anode后面定义：
//或
typedef struct node anode;
int main()
{
    anode a;
    return 0;
}
