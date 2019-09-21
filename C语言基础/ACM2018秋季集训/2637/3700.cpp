#include <iostream>
using namespace std;
bool isrn(int y)
{
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        return true;
    else
        return false;
}
int main()
{
    int y, m, d, z;
    while (cin >> y >> m >> d >> z)
    {
        int sum = 0;
        if ((isrn(y) && m > 2) || isrn(y - 1) || isrn(y - 2) || (isrn(y - 3) && m <= 2))
            sum = 1;
        /*sum = (sum + 365 * 3) % 7; //不知道哪里错了
        cout << sum << endl;
        if ((z - sum) <= 0)
            cout << z - sum + 7 << endl;
        else
            cout << z - sum << endl;
        /* sum = sum + 365 * 3;
        cout << 7 - (sum - z) % 7 << endl;*/
    }
    return 0;
}
