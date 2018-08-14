#include <stdio.h>
int main()
{
    int n, i;
    int A = 0, B = 0, C = 0, D = 0, E = 0;
    scanf("%d", &n);
    int number[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
        if (number[i] >= 90)
        {
            A++;
        }
        else if (number[i] >= 80 && number[i] < 90)
        {
            B++;
        }
        else if (number[i] >= 70 && number[i] < 80)
        {
            C++;
        }
        else if (number[i] >= 60 && number[i] < 70)
        {
            D++;
        }
        else if (number[i] < 60)
        {
            E++;
        }
    }

    printf("A %d\n", A);
    printf("B %d\n", B);
    printf("C %d\n", C);
    printf("D %d\n", D);
    printf("E %d\n", E);
    return 0;
}
