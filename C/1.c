#include <stdio.h>
    int
    main()
{
    int t1, t2, t3, h1, h2, h3, m1, m2, m3, s1, s2, s3;
    scanf("%2d:%2d:%2d", &h1, &m1, &s1);
    scanf("%2d:%2d:%2d", &h2, &m2, &s2);
    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;
    if (t1 > t2)
    {
        t3 = t1 - t2;
    }
    else
    {
        t3 = t2 - t1;
    }
    h3 = t3 / 3600;
    m3 = t3 % 3600 / 60;
    s3 = t3 % 3600 % 60;
    printf("%02d:%02d:%02d", h3, m3, s3);
    return 0;
}