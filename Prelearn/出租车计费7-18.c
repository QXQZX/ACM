#include <stdio.h>
int main()
{
    double s;
    double pys;
    int m;
    int pym;

    scanf("%lf %d", &s, &m);
    pym = (m / 5) * 2;

    if (s <= 3)
    {
        pys = 10;
    }
    else if (s > 3 && s <= 10)
    {
        pys = (s - 3) * 2 + 10;
    }
    else if (s > 10)
    {
        pys = 24 + (s - 10) * 3;
    }

    int i = (int)(pys + 0.5); // i为pys的四舍五入

    printf("%d", i + pym);
    return 0;
}
/*
#include <stdio.h>
int main()
{
    double s;
    double pys;
    int m;
    int pym;

    scanf("%lf %d", &s, &m);
    pym = (m / 5) * 2;

    if (s <= 3)
    {
        pys = 10;
    }
    else if (s > 3 && s <= 10)
    {
        pys = (s - 3) * 2 + 10;
    }
    else if (s > 10)
    {
        pys = 24 + (s - 10) * 3;
    }

    printf("%.lf", pys + pym);
    return 0;
}*/