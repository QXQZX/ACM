#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    int a[100003];
    cin >> t;
    while (t--)
    {
        memset(a, 0, sizeof(a)); // 注意a[100003]={0};和memset不一样
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            if (a[k] == 1)
                continue;
            else
            {
                cnt++;
                a[k] = 1;
            }
        }
        // cout << cnt << endl;
        if (cnt == 88)
            cout << "/^o^\\" << endl;
        else if (cnt > 88)
            cout << "impossible" << endl;
        else if (cnt < 88)
            cout << "/-o-\\" << endl;
    }
    return 0;
}