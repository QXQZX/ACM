#include <bits/stdc++.h>
#define N 1000005
using namespace std;

bool is_prime[N];
int prime[N];
void seive()
{
    int cnt = 0;
    for (int i = 0; i <= N; i++)
        is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            prime[cnt++] = i;
            for (int j = i + i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}

int main()
{
    seive();
    char s[10];
    while (cin >> s)
    {
        int sum = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            int ans = s[i] - '0';
            sum += ans * ans;
        }
        if (is_prime[sum])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
