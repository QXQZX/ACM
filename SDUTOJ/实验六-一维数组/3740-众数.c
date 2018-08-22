#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int i, a[10001] = {0}, count[10001] = {0}, max, index;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            count[a[i]]++;
        }
        max = count[a[0]];
        index = a[0];
        for (i = 0; i < n; i++)
        {
            if (count[a[i]] > max)
            {
                max = count[a[i]];
                index = a[i];
            }
        }
        printf("%d\n", index);
    }
    return 0;
}
