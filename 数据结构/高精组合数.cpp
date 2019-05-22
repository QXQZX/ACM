#include <bits/stdc++.h>
using namespace std;
int arr[41];
int brr[41];
void c(int a, int b)
{
    for (int i = 0; i < 41; i++)
    {
        arr[i] = 0;
        brr[i] = 0;
    }
    for (int i = 1; i <= b; i++)
        arr[i] = i;
    int cnt = 1;
    double m = 1.0, n = 1.0;
    for (int i = a; cnt <= b; i--)
    {
        brr[i] = i;
        cnt++;
        if (brr[i] % 2 == 0 && arr[brr[i] / 2] > 1)
        {
            arr[brr[i] / 2] = 1;
            brr[i] = 2;
        }
        m *= brr[i];
    }
    for (int i = 1; i <= b; i++)
        n *= arr[i];
    printf("%.0lf\n", m / n);
}
int main()
{
    int n, a, b;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &a, &b);
        if (a < b)
            printf("0\n");
        else if (a / 2 < b)
            c(a, a - b);
        else
            c(a, b);
    }
    return 0;
}
