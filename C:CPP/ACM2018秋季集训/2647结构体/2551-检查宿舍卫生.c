#include <stdio.h>
typedef struct
{
    int num;
    int sum;
} node;
int main()
{
    node node[110];
    int i, j, n;
    while (~scanf("%d", &n))
    {
        for (i = 0; i < n; i++)
        {
            node[i].sum = 0;
            for (j = 0; j < 5; j++)
            {
                scanf("%d", &node[i].num);
                node[i].sum += node[i].num;
            }
        }
        int cnt = 0;
        int max = node[0].sum;
        for (i = 0; i < n; i++)
        {
            if (node[i].sum < 85)
                cnt++;
            if (node[i].sum > max)
                max = node[i].sum;
        }
        if (max < 85)
            printf("%d No\n", cnt);
        else
            printf("%d %d\n", cnt, max);
    }
    return 0;
}
