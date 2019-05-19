#include <stdio.h>
#include <string.h>
int main()
{
    int n, x, i, j, t;
    scanf("%d", &n);
    char stry[5] = {'a', 'e', 'i', 'o', 'u'};
    char str[100];
    getchar(); //用来读回车符  少了必错
    //scanf读字符串不能读空格   gets可以
    for (t = 0; t < n; t++)
    {
        gets(str);
        for (i = 0; i < 5; i++)
        {
            int cnt = 0;
            for (j = 0; j < strlen(str); j++)
            {
                if (stry[i] == str[j])
                    cnt++;
            }
            printf("%c:%d\n", stry[i], cnt);
        }
        printf("\n");
    }
    return 0;
}
