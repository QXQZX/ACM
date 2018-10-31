#include <iostream>
using namespace std;
int main()
{
    int n, i, m, t;
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        for (m = i; m < n; m++)
        {
            cout << ' ';
        }
        for (t = 1; t <= i; t++)
        {
            cout << t;
        }
        for (t = i - 1; t >= 1; t--)
        {
            cout << t;
        }
        cout << endl;
    }
    for (i = n - 1; i > 0; i--)
    {
        for (m = i; m < n; m++)
        {
            cout << ' ';
        }
        for (t = 1; t <= i; t++)
        {
            cout << t;
        }
        for (t = i - 1; t >= 1; t--)
        {
            cout << t;
        }
        cout << endl;
    }
    return 0;
}