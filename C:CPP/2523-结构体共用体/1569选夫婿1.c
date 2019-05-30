#include <stdio.h>
typedef struct
{
    char s[22];
    int h;
    int w;
} node;
int main()
{
    node temp, a[1111], b[1111];
    int n, aa, bb, c, d;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", a[i].s, &a[i].h, &a[i].w);
    }
    scanf("%d %d %d %d", &aa, &bb, &c, &d);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].h >= aa && a[i].h <= bb && a[i].w >= c && a[i].w <= d)
        {
            b[cnt++] = a[i];
        }
    }


    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 0; j < cnt - i - 1; j++)
        {
            if (b[j].h > b[j + 1].h)
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
            else if (b[j].h == b[j + 1].h)
            {
                if (b[j].w > b[j + 1].w)
                {
                    temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
    }
    if (cnt == 0)
        printf("No\n");
    
    for (int i = 0; i < cnt; i++)
    {
        printf("%s %d %d\n", b[i].s, b[i].h, b[i].w);
    }
    return 0;
}
