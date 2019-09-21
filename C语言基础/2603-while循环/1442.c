#include <stdio.h>
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        int cnt = 0;
        double average = (a + b + c) / 3.0;
        if (a > average)
            cnt++;
        if (b > average)
            cnt++;
        if (c > average)
            cnt++;

        if (cnt == 2)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
