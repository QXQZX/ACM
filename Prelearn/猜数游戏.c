#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number = rand() % 100;
    int sr;
    int count = 0;
    printf("我已经想好了一个0到99之间的数字，快来猜一下吧！\n");

    do
    {
        printf("请输入一个0到99直之间的数字。\n");
        scanf("%d", &sr);
        count++;
        if (sr > number)
        {
            printf("你输入的数大了一点，别灰心，继续努力，就快接近答案了。\n");
        }
        else if (sr < number)
        {
            printf("你输入的数小了一点，别灰心，继续努力，就快接近答案了。\n");
        }
    } while (sr != number);

    printf("你太棒了，终于%d次输入中猜对了正确数字%d。\n", count, number);

    return 0;
}