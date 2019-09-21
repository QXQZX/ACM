#include <iostream>
using namespace std;
double A(int n); //求阶乘
int main()
{
    int t, m, n, i;
    long long int num, f[100];
    cin >> t;
    while (t--)
    {
        num = 0;
        cin >> n >> m;
        num = A(n) / (A(n - m) * A(m));
        f[1] = 0;
        f[2] = 1;
        for (i = 3; i <= n; i++)
        {
            f[i] = (i - 1) * (f[i - 1] + f[i - 2]);
        }
        cout << num * f[m] << endl;
    }
    return 0;
}
double A(int n)
{
    int i, count = 1;
    double A = 1;
    for (i = n; i >= 1; i--)
    {
        A *= i;
    }
    return A;
}