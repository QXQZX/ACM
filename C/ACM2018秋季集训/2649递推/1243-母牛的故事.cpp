#include <iostream>
using namespace std;
int main()
{
    int n, i, f[100];
    while (cin >> n && n)
    {
        f[1] = 1;
        f[2] = 2;
        f[3] = 3;
        for (i = 4; i <= n; i++)
        {
            f[i] = f[i - 1] + f[i - 3];
        }
        cout << f[n] << endl;
    }
    return 0;
}
