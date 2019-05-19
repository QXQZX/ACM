#include <stdio.h>
int main()
{
    int n;
    int x1, y1;
    int x2, y2;
    while (~scanf("%d", &n))
    {
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);
        int x, y, cnt = 0;
        while (n--)
        {
            scanf("%d %d", &x, &y);
            if (x > x1 && x < x2 && y > y1 && y < y2)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
