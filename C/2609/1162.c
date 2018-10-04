#include <stdio.h>
int main()
{
    int i = 0;
    char line[80];
    int k = 0;

    while ((line[k] = getchar()) != '\n')
    {
        k++;
    }

    for (i = 0; i < k; i++)
    {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            putchar(line[i]);
    }
    return 0;
}