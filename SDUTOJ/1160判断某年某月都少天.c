#include <stdio.h>
int main()
{
    int year, month, m;
    char a;
    scanf("%d%c%d", &year, &a, &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        m = 31;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        m = 30;
    }
    if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            m = 29;
        }
        else
        {
            m = 28;
        }
    }

    printf("%d", m);
    return 0;
}