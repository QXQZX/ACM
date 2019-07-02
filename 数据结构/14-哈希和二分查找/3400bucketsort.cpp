#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
    int n, d;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d);
        if (d >= 100)
            a[100]++;
        else
            a[d]++;
    }
    for (int i = 0; i <= 100; i++)
    {
        if (a[i] != 0)
            printf("%d %d\n", i, a[i]);
    }
    return 0;
}
