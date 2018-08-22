#include <stdio.h>
int main()
{
    int n, i;
    int m[100];
    while (scanf("%d", &n) != EOF)
    {
        int sum = 0;
        int average = 0;
        int a = 0, b = 0, c = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &m[i]);
            sum += m[i];
        }

        average = sum / n;

        for (i = 0; i < n; i++)
        {
            if (m[i] < average)
            {
                a++;
            }
            else if (m[i] == average)
            {
                b++;
            }
            else if (m[i] > average)
            {
                c++;
            }
        }

        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
