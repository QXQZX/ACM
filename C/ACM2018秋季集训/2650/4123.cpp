#include <iostream>
using namespace std;
int F(int m, int n)
{
    int value;
    if (m == 0)
        value = n + 1;
    else if (m > 0 && n == 0)
        value = F(m - 1, 1);
    else if (m > 0 && n > 0)
        value = F(m - 1, F(m, n - 1));
    return value;
}
int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        cout << F(m, n) << endl;
    }
    return 0;
}
