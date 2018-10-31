#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t, i, n;
    double s[10000], h, lasth;
    cin >> t;
    while (t--)
    {
        cin >> h >> n;
        s[1] = h;
        s[2] = 2 * h;
        for (i = 3; i <= n; i++)
        {
            s[i] = s[i - 1] + s[i - 2] / 2.0;
        }
        for (i = 1; i <= n; i++)
        {
            h /= 2.0;
        }
        printf("%.2lf %.2lf\n", s[n], h);
    }
    return 0;
}
