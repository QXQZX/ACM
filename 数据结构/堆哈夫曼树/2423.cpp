#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n, k;
    priority_queue<int, vector<int>, greater<int>> q; // 升序的优先队列
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        q.push(k);
    }
    long long ans = 0; // 不用 long long 过不了
    while (!q.empty())
    {
        int a = q.top();
        q.pop();
        if (!q.empty())
        {
            int b = q.top();
            q.pop();
            ans += (a + b);
            q.push(a + b);
        }
    }
    cout << ans << endl;
    return 0;
}