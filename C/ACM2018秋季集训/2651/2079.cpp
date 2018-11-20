#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct node
{
    double wi;
    double pi;
};
bool up(node a, node b)
{
    return a.pi < b.pi;
}
int main()
{
    int c, j, i, n, m;
    node temp, a[10001];
    scanf("%d", &c);
    while (c--)
    {
        scanf("%d %d", &n, &m);
        for (i = 0; i < m; i++)
        {
            scanf("%lf %lf", &a[i].pi, &a[i].wi);
        }
        sort(a, a + m, up);
        double cnt = 0;
        i = 0;
        while (1)
        {
            if (n - a[i].wi * a[i].pi >= 0)
            {
                cnt += a[i].wi;
                n -= a[i].wi * a[i].pi;
                i++;
            }
            else
            {
                cnt += n * 1.0 / a[i].pi;
                break;
            }
        }
        printf("%.2lf\n", cnt);
    }
    return 0;
}
