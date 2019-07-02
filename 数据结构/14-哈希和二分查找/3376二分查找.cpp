#include <bits/stdc++.h>
using namespace std;
int a[1000001];
int search(int l, int r, int k)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (a[mid] == k)
        return mid;
    if (a[mid] > k)
        return search(l, mid - 1, k);
    if (a[mid] < k)
        return search(mid + 1, r, k);
}
int main()
{
    int n, m, k;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (m--)
    {
        cin >> k;
        cout << search(0, n, k) << endl;
    }
    return 0;
}