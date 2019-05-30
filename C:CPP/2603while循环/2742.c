#include <stdio.h>
int main()
{
    int l, w;
    while (scanf("%d %d", &l, &w) != EOF)
    {
        int n = l / w;
        printf("%d\n", n);
    }
    return 0;
}
