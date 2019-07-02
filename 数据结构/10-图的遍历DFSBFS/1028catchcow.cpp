#include <bits/stdc++.h>
using namespace std;
int n, k;
int cat[100005];
void bfs(int n)
{
    cat[n] = 0;
    queue<int> q;
    q.push(n);
    while (!q.empty())
    {
        int num, temp = q.front();
        q.pop();
        /************************************/
        num = temp + 1;
        if (num >= 0 && num <= 100000 && cat[num] == -1)
        {
            cat[num] = cat[temp] + 1;
            q.push(num);
        }
        if (num == k)
            break;
        /************************************/
        num = temp - 1;
        if (num >= 0 && num <= 100000 && cat[num] == -1)
        {
            cat[num] = cat[temp] + 1;
            q.push(num);
        }
        if (num == k)
            break;
        /************************************/
        num = 2 * temp;
        if (num >= 0 && num <= 100000 && cat[num] == -1)
        {
            cat[num] = cat[temp] + 1;
            q.push(num);
        }
        if (num == k)
            break;
    }
    cout << cat[k] << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    while (cin >> n >> k)
    {
        memset(cat, -1, sizeof(cat));

        if (n > k)
            cout << n - k << endl;
        else
            bfs(n);
    }
    return 0;
}
