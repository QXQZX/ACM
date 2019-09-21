/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while (~scanf("%d*%d=?", &n, &m))
    {
        int l = n / 10;
        int r = n % 10;
        int x = r - l;
        cout << r - l << endl;
        int a[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int cnt = 0;
        for (int i = r;; i--)
        {
            cnt++;
            if (cnt == x)
            {
                cout << i << endl;
                a[i] = 0;
                break;
            }
            else
            {
                cout << i << ' ';
                a[i] = 0;
            }
        }
        int ll = 0;
        for (int i = 1; i < r; i++)
        {
            if (a[i] != 0)
                ll++;
        }

        cout << ll << x - 1 << 10 - r << endl;
    }

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (~scanf("%d*9=?", &n))
    {
        int x, y, z;
        y = n % 10;
        z = n / 10;
        x = y - z;
        printf("%d\n", x);
        for (int i = 0; i < x; i++)
        {
            if (i == x - 1)
            {
                printf("%d\n", y - i);
            }
            else
            {
                printf("%d ", y - i);
            }
        }
        printf("%d%d%d\n", 10 - (10 - y) - x, x - 1, 10 - y);
    }
    return 0;
}
