#include <iostream>
using namespace std;
int main()
{
    int a[1001][1001];
    int t, n, m, k, i, j, p;
    cin >> t;
    while (t--)
    {
        int _i,_j,flag1, flag2, flag3;
        cin >> n >> m >> k;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                cin >> a[i][j];
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                flag1 = 0, flag2 = 0, flag3 = 0;
                _i=i,_j=j;
                for (p = 0; p < k && _j + p < m && _i + p < n; p++)
                {
                    if (a[_i][_j + p] == 0)
                    {
                        flag1++;
                        _j++;
                    }
                    if (a[_i + p][_j] == 0)
                    {
                        flag2++;
                        _j++;
                    }
                    if (a[_i + p][_j + p] == 0)
                    {
                        flag3++;
                        _i++;
                        _j++;
                    }
                }
                if ((flag1 + flag2 + flag3) == k * k)
                    break;
            }
        }
        if ((flag1 + flag2 + flag3) == k * k)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
