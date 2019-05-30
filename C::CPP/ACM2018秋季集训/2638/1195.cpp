#include <iostream>
using namespace std;
int main()
{
    int n, i, m, t;
    cin >> n;
    int temp = 2 * n - 2;
    for (i = 1; i <= n; i++)
    {
        for (m = 1; m <= temp; m++)
        {
            cout << ' ';
        }
        for (t = 1; t <= i; t++)
        {
            if (t == 1)
                cout << t;
            else
                cout << ' ' << t;
        }
        for (t = i - 1; t >= 1; t--)
        {
            cout << ' ' << t;
        }
        cout << endl;
        temp -= 2;
    }
    return 0;
}