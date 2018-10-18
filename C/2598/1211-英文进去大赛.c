#include <stdio.h>
struct node
{
    double num[7];
    char str[30];
};
int main()
{
    int i, max, min;
    struct node test;
    while (~scanf("%lf", &test.num[0]))
    {
        max = test.num[0];
        min = test.num[0];
        double sum = 0;
        for (i = 1; i < 7; i++)
        {
            scanf("%lf", &test.num[i]);
        }
        getchar();
        gets(test.str);
        for (i = 0; i < 7; i++)
        {
            if (test.num[i] > max)
                max = test.num[i];
            if (test.num[i] < min)
                min = test.num[i];

            sum += test.num[i];
        }
        printf("%s %.2lf\n", test.str, (sum - max - min) / 5.0);
    }
    return 0;
}
