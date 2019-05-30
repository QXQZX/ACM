#include <stdio.h>
#include <string.h>
typedef union { //结构体也可以
    double a;
    char b[25];
    int c;
} node;
//结构体也可以
/*typedef struct {
    double a;
    char b[25];
    int c;
} node;*/

int main()
{
    node node[110000];
    char s[110000][25];
    int i, n, m;
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        if (strcmp(s[i], "INT") == 0)
        {
            scanf("%d", &node[i].c);
        }
        else if (strcmp(s[i], "DOUBLE") == 0)
        {
            scanf("%lf", &node[i].a);
        }
        else if (strcmp(s[i], "STRING") == 0)
        {
            scanf("%s", node[i].b);
        }
    }
    int k;
    for (i = 0; i < m; i++)
    {
        scanf("%d", &k);
        if (strcmp(s[k], "INT") == 0)
        {
            printf("%d\n", node[k].c);
        }
        else if (strcmp(s[k], "DOUBLE") == 0)
        {
            printf("%.2lf\n", node[k].a);
        }
        else if (strcmp(s[k], "STRING") == 0)
        {
            printf("%s\n", node[k].b);
        }
    }
    return 0;
}
