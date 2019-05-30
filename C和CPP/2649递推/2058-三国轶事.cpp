#include <iostream>
using namespace std;
int main()
{
    int n, i;
    long long int f[100];
    while (cin >> n)
    {
        f[1] = 0;
        f[2] = 1;
        for (i = 3; i <= n; i++)
        {
            f[i] = (i - 1) * (f[i - 1] + f[i - 2]);
        }
        cout << f[n] << endl;
    }
    return 0;
}