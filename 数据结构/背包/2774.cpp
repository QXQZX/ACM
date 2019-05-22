#include <bits/stdc++.h>
using namespace std;
int dp[3000001], vi[33];
int main()
{
    double q, num, A, B, C;
    int n;
    char c;
    while (~scanf("%lf %d", &q, &n) && n)
    {
        int Q = q * 100; // 避免dp数组出问题我们把钱数都乘100
        memset(dp, 0, sizeof(dp));
        memset(vi, 0, sizeof(vi));
        for (int m = 0; m < n; m++)
        {
            int sum, k, flag = 1;
            sum = A = B = C = 0;
            scanf("%d", &k);
            getchar(); // 收纳行末回车
            for (int i = 0; i < k; i++)
            {
                scanf("%c:%lf", &c, &num);
                getchar();
                if (c == 'A')
                    A += num * 100;
                else if (c == 'B')
                    B += num * 100;
                else if (c == 'C')
                    C += num * 100;
                else // 不是ABC的情况
                    flag = 0;
            }
            sum = A + B + C;
            if (A > 60000 || B > 60000 || C > 60000)
                flag = 0;
            if (sum <= 100000 && flag)
                vi[m] = sum;
            else
                vi[m] = 0;
        }
        // for (int i = 0; i < n; i++)
        //     cout << vi[i] << ' ';
        /*01背包部分*/
        for (int i = 0; i < n; i++)
        {
            for (int j = Q; j > 0; j--)
            {
                if (j >= vi[i])
                    dp[j] = max(dp[j], dp[j - vi[i]] + vi[i]);
            }
        }
        printf("%.2lf\n", dp[Q] / 100.0);
    }
    return 0;
}