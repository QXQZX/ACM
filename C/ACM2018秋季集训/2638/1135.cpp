#include <iostream>
using namespace std;
int main()
{
    int n, i, m, t;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (m = i; m < n; m++)
        {
            cout << ' ';
        }
        for (t = 1; t <= 2 * i - 1; t++)
        {
            if (t == 1 || t == 2 * i - 1)
                cout << '+';
            else
                cout << '*';
        }
        cout << endl;
    }
    for (i = n - 1; i > 0; i--)
    {
        for (m = i; m < n; m++)
        {
            cout << ' ';
        }
        for (t = 2 * i - 1; t > 0; t--)
        {
            if (t == 1 || t == 2 * i - 1)
                cout << '+';
            else
                cout << '*';
        }
        cout << endl;
    }
    return 0;
}
