#include <iostream>
using namespace std;
int a[112345];
void sort(int left, int right)
{
    if (left >= right)
        return; ///递归边界
    int i = left, j = right, x = a[left];
    while (i < j)
    {
        while (i < j && a[j] <= x)
            j--;
        a[i] = a[j];
        while (i < j && a[i] >= x)
            i++;
        a[j] = a[i];
    }
    a[i] = x;
    sort(left, i - 1);
    sort(i + 1, right);
}
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        sort(0, n - 1);
        while (m--)
        {
            int key;
            cin >> key;
            cout << a[key - 1] << endl;
        }
    }
}