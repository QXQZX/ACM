#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int a[1111];
    cin >> m >> n;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a[num]++;
    }
    int max = a[1];
    int ans = 1;
    for (int i = 1; i <= m; i++)
    {
        if (a[i] > max)
        {
            ans = i;
            max = a[i];
        }
    }
    cout << ans << endl
         << a[ans] << endl;
    return 0;
}