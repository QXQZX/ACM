#include <iostream>
using namespace std;
int main()
{
    long long int f[100]; //用long long否则必错
    int i, n;
    while (cin >> n)
    {
        f[1] = 1;
        f[2] = 2;
        for (i = 3; i <= n; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
        }
        cout << f[n] << endl;
    }
    return 0;
}