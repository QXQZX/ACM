#include <bits/stdc++.h>
using namespace std;
int a[100001];
void Qsort(int l, int r)
{
    if (l < r)
    {
        int i = l, j = r;
        int t = a[l];
        while (i < j)
        {
            while (a[j] >= t && i < j)
                j--;
            a[i] = a[j];
            while (a[i] <= t && i < j)
                i++;
            a[j] = a[i];
        }
        a[i] = t;
    }
}
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        Qsort(0, n - 1);
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                printf("%d\n", a[i]);
            else
                printf("%d ", a[i]);
        }
    }
    return 0;
}