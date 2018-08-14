#include <stdio.h>
int main()
{
    int h, m;

    scanf("%d:%d", &h, &m);

    if (h >= 1 && h <= 11)
    {
        printf("%d:%02d AM", h, m);   // %02d   输出两位数  若只有一位数是前面补出0   比如3输出03
    }
    else if (h == 0)
    {
        printf("%d:%02d AM", h + 12, m);
    }
    else if (h == 12)
    {
        printf("%d:%02d PM", h, m);
    }
    else if (h >= 13 && h <= 23)
    {
        printf("%d:%02d PM", h - 12, m);
    }

    return 0;
}