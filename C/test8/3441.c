#include <stdio.h>
void f(int *p, int n);
int main()
{
    int n, i, j;
    int a[100];
    int *p = a;

    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        f(p, n);

        for (i = 0; i < n; i++)
        {
            if (i == n - 1)
                printf("%d\n", a[i]);
            else
                printf("%d ", a[i]);
        }
    }
    return 0;
}
void f(int *p, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + j) < *(p + i))
            {
                int temp = *(p + j);
                *(p + j) = *(p + i);
                *(p + i) = temp;
            }
        }
    }
}