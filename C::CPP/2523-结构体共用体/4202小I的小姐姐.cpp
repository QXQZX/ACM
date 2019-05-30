#include <iostream>
#include <cstdio>
using namespace std;
struct node
{
    int w1, w2, w3;
    double sum;
} a[5555];
int n;
int main()
{
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &a[i].w1, &a[i].w2, &a[i].w3);
            a[i].sum = a[i].w1 * 0.7 + a[i].w2 * 0.2 + a[i].w3 * 0.1;
        }
        double max = a[0].sum;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i].sum > max) {
                ans = i;
                max = a[i].sum;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}