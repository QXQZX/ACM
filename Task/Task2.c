#include <stdio.h>
int main()
{
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        switch (month)
        {
        case 1: printf("%d\n", day); break;
        case 2: printf("%d\n", 31+day); break;
        case 3: printf("%d\n", 31+29+day); break;
        case 4: printf("%d\n", 31*2+29+day); break;
        case 5: printf("%d\n", 31*2+30+29+day); break;
        case 6: printf("%d\n", 31*3+30+29+day); break;
        case 7: printf("%d\n", 31*3+30*2+29+day); break;
        case 8: printf("%d\n", 31*4+30*2+29+day); break;
        case 9: printf("%d\n", 31*5+30*2+29+day); break;
        case 10: printf("%d\n", 31*5+30*3+29+day); break;
        case 11: printf("%d\n", 31*6+30*3+29+day); break;
        case 12: printf("%d\n",31*6+30*4+29+day); break;
        }
    }
    else
    {
        switch (month)
        {
        case 1: printf("%d\n", day); break;
        case 2: printf("%d\n", 31+day); break;
        case 3: printf("%d\n", 31+29+day); break;
        case 4: printf("%d\n", 31*2+28+day); break;
        case 5: printf("%d\n", 31*2+30+28+day); break;
        case 6: printf("%d\n", 31*3+30+28+day); break;
        case 7: printf("%d\n", 31*3+30*2+28+day); break;
        case 8: printf("%d\n", 31*4+30*2+28+day); break;
        case 9: printf("%d\n", 31*5+30*2+28+day); break;
        case 10: printf("%d\n", 31*5+30*3+28+day); break;
        case 11: printf("%d\n", 31*6+30*3+28+day); break;
        case 12: printf("%d\n",31*6+30*4+28+day); break;
        }
    }
    
    return 0;
}
