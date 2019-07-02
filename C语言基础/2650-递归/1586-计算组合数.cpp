#include <iostream>
using namespace std;
int c(int n, int m)
{
    int value;
    if (m == 0 || n == 1 || m == n)
        value = 1;
    else
        value = c(n - 1, m - 1) + c(n - 1, m);
    return value;
}
int main()
{
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << c(n, m) << endl;
    }
    return 0;
}

