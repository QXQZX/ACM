#include <stdio.h>
int main()
{
    int count[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int day = 0;
        scanf("%d %d %d", &y, &m, &d);
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        {
            count[1] = 29;
        }
        for (int i = 0; i < m - 1; i++)
        {
            day += count[i];
        }
        printf("%d\n", day + d);
    }
    return 0;
}
