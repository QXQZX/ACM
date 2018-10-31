#include <iostream>
using namespace std;
int s[31][31][31]={0};
int f(int a, int b, int c);
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        cout << f(a, b, c) << endl;
    }
    return 0;
}
int f(int a, int b, int c)
{
    int num;
    if (a <= 0 || b <= 0 | c <= 0)
        num = 1;
    else if (a > 20 || b > 20 || c > 20)
        num = f(20, 20, 20);
    else if (a < b && b < c)
        num = f(a, b, c - 1) + f(a, b - 1, c - 1) - f(a, b - 1, c);
    else
        num = f(a - 1, b, c) + f(a - 1, b - 1, c) + f(a - 1, b, c - 1) - f(a - 1, b - 1, c - 1);

    return num;
}