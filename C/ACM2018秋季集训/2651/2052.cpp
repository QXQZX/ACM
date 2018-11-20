#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
    int wi;
    int pi;
    double wp;
};
bool down(node a, node b)
{
    return a.wp > b.wp;
}
int main()
{
    int m, i;
    node a[11];
    cin >> m;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i].pi >> a[i].wi;
        a[i].wp = a[i].pi / a[i].wi;
    }
    sort(a, a + 10, down);
    int cnt = 0;
    for (i = 0; i < 10 && m - a[i].wi >= 0; i++)
    {
        cnt += a[i].pi;
        m -= a[i].wi;
    }
    if (i < 10) //注意 i<10 m>0而减去下一个wi就小于0 的时候
        cnt += a[i].wp * m;
    cout << cnt << endl;

    return 0;
}
