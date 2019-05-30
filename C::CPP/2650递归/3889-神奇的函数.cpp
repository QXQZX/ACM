#include <iostream>
using namespace std;
int F(int n, int m)
{
    int value;
    if (m == 1 || n == 1)
        value = 1;
    else
        value = F(n - 1, m) + F(n, m - 1);
    return value;
}
int main()
{
    int t, m, n;
    while (cin >> n >> m)
    {
        cout << F(n, m) << endl;
    }
    return 0;
}