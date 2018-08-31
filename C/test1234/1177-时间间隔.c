#include <stdio.h>
int main()
{
    int h, m, s;
    int h1, m1, s1;
    int h2, m2, s2;
    int s3, s4;
                                //                    example
    scanf("%2d:%2d:%2d\n", &h1, &m1, &s1);    //          12:01:12
    scanf("%2d:%2d:%2d", &h2, &m2, &s2);      //          13:09:43

    s3 = h1 * 3600 + m1 * 60 + s1;
    s4 = h2 * 3600 + m2 * 60 + s2;

    if (s3 > s4)
    {
        s = s3 - s4;
    }
    else
    {
        s = s4 - s3;
    }

    h = s / 3600;
    m = s % 3600 / 60;
    s = s % 60;

    printf("%02d:%02d:%02d", h, m, s);      //01:08:31
    //或者 
    printf("%.2d:%.2d:%.2d", h, m, s);
    return 0;
}