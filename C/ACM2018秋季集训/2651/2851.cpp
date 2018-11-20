#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct node
{
    int wi;
    int pi;
};
bool up(node a, node b)
{
    return a.wi < b.wi;
}
int main()
{
    int n, m, i, j;
    node temp, a[10001];
    while (~scanf("%d %d", &n, &m))
    {
        for (i = 0; i < n; i++)
            scanf("%d %d", &a[i].wi, &a[i].pi);
        sort(a, a + n, up);
        int cnt = 0;
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i].wi != a[j].wi)
                    break;
                else if (a[i].wi == a[j].wi && a[i].pi < a[j].pi)
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        i = 0;
        while (m--)
        {
            cnt += a[i].pi;
            i++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
