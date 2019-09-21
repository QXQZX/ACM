#include <iostream>
using namespace std;
int main()
{
    int i, n, f[100];
    while (cin >> n && n)
    {
        f[n] = 1;
        for (i = n - 1; i > 0; i--)
        {
            f[i] = (f[i + 1] + 1) * 2;
        }
        cout << f[1] << endl;
    }
    return 0;
}
