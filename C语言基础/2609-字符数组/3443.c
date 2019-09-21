#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    char me[25], mz[100][25], home[100][25];   //必须是25长度的

    while (~scanf("%d", &n))
    {
        int cnt = 0;
        scanf("%s", me);
        for (i = 0; i < n; i++)
        {
            scanf("%s %s", mz[i], home[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (strcmp(me, home[i]) == 0)
            {
                printf("%s\n", mz[i]);
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
