#include <stdio.h>
int main()
{  //*********不要使用 if-if-if级联  假如输入2018 1 31   二月那行用if的话会重新来一遍    所以用else if**********//
    int year, month, day;
    while (scanf("%d %d %d", &year, &month, &day) != EOF)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
        {

            if (day == 31)
            {
                month++;
                day = 1;
            }
            else
            {
                day++;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day == 30)
            {
                month++;
                day = 1;
            }
            else
            {
                day++;
            }
        }
        else if (month == 12)
        {
            if (day == 31)
            {
                year++;
                month = 1;
                day = 1;
            }
            else
            {
                day++;
            }
        }
        else if (month == 2)
        {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            {
                if (day == 29)
                {
                    month++;
                    day = 1;
                }
                else
                {
                    day++;
                }
            }
            else
            {
                if (day == 28)
                {
                    month++;
                    day = 1;
                }
                else
                {
                    day++;
                }
            }
        }
        printf("%d %d %d\n", year, month, day);
    }

    return 0;
}