#include <stdio.h>
int main()
{
    //a输入时间    b时差
    int a, b, h, m;
    scanf("%d %d", &a, &b);
    h = a / 100;
    m = a % 100 + b;

    if (m >= 0)
    {
        h = (h + m / 60) * 100 + m % 60;
        printf("时间是%d", h);
    }
    else if (m < 0)
    {
        while (m < 0)
        {
            h--;
            m += 60;
        }
        h = h * 100 + m;
        printf("时间是%d", h);
    }

    return 0;
}

/*     停留写的
#include <stdio.h>
int main()
{
    //a输入时间    b时差
    int start, pass;
    int hour minute;

    scanf("%d %d", &start, &pass);
    hour = start / 100 + pass / 60;
    minute = start % 100 = pass % 60;

    if (minute >= 0)
    {
        hour++;
        minute += 60;
    }
    else if (minute < 0)
    {
        hour--;
        minute += 60;
    }

    printf("%d%02d", hour, minute);

    return 0;
}
*/