#include <iostream> //超时
#include <cmath>
using namespace std;
int main()
{
    int t, n, i, j;
    double a[100005];
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag = fabs(a[0] - a[1]);
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                int temp = fabs(a[i] - a[j]);
                if (temp < flag)
                    flag = temp;
                else if (temp == flag)
                    cnt++;
            }
        }
        cout << flag << ' ' << cnt << endl;
    }
    return 0;
}
