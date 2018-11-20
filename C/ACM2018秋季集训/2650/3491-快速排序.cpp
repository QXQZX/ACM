#include <iostream>
using namespace std;

int a[100001];
void qsort(int left, int right);
int main()
{
    int n, i;

    while (cin >> n)
    {
        for (i = 0; i < n; i++)
            cin >> a[i];
        qsort(0, n - 1);
        for (i = 0; i < n; i++)
        {
            if (i)
                cout << ' ' << a[i];
            else
                cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
void qsort(int left, int right)
{
    int i = left, j = right, temp;
    temp = a[left];

    if (left >= right)
        return;
    while (i != j)
    {
        while (a[j] >= temp && i < j)
        {
            j--;
        }
        a[i] = a[j];
        while (a[i] <= temp && i < j)
        {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = temp;
    qsort(left, i - 1);
    qsort(i + 1, right);
}
