#include <bits/stdc++.h>
using namespace std;
int n;
int a[10005];
void shellsort(int d)
{
    for (int i = d; i < n; i++)
    {
        for (int j = i - d; j >= 0; j -= d)
        {
            if (a[j] > a[j + d])
                swap(a[j], a[j + d]);
        }
    }
}
int main()
{
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        shellsort(n / 2);
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                cout << a[i] << endl;
            else
                cout << a[i] << ' ';
        }
        shellsort(1);
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                cout << a[i] << endl;
            else
                cout << a[i] << ' ';
        }
    }
    return 0;
}
