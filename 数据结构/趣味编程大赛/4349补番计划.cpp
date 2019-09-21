#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[111];
    while (cin >> n)
    {
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0, cnt = 0;
        if (a[0] == 1 && a[1] == 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] + 1 == a[i + 1])
                    cnt++;
                else
                    break;
            }
            ans = max(ans, cnt);
        }
        for (int i = 0; i < n - 1;)
        {
            int j, t = a[i];
            cnt = 0;
            for (j = i + 1; j < n; j++)
            {
                if (t + 1 == a[j])
                {
                    cnt++;
                    t = a[j];
                }
                else
                {
                    break;
                }
            }
            i = j;
            ans = max(ans, cnt - 1);
        }
        if (a[n - 1] == 1000 && a[n - 2] == 999)
        {
            cnt = 1;
            for (int i = n - 2; i >= 0; i--)
            {
                if (a[i] - 1 == a[i - 1])
                {
                    cnt++;
                }
                else
                    break;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}