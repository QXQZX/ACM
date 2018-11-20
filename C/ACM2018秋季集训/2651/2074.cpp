#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
    int start;
    int tend;
};
bool down(int a, int b)
{
    return a > b;
}
int main()
{
    int i, n, t, m;
    int a[522], b[5222];
    node len[5222];
    while (cin >> n >> m)
    {
        for (i = 0; i < n; i++)
            cin >> a[i];
        //对输入的数字进行升序排序
        sort(a, a + n);
        int t = a[n - 1] - a[0] + 1;
        for (i = 0; i < n; i++)
        {
            len[i].start = a[i] - 1;
            len[i].tend = a[i];
        }
        for (i = 0; i < n - 1; i++)
            b[i] = len[i + 1].start - len[i].tend;
        sort(b, b + n - 1, down); //对间隔距离进行降序排序

        for (i = 0; i < m - 1; i++) //m条线就要进行m-1次分割，每一次分割删除最大的间隔区间
            t -= b[i];

        cout << t << endl;
    }
    return 0;
}