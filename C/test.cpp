#include <iostream>
using namespace std;
int dp[11][11];
int main()
{
    int n, m;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (i == j && i && j)
                dp[i][j] = 0;
            else
                dp[i][j] = 1;
        }
    }
    dp[3][0] = 1;
    dp[0][4] = 0;
    while (cin >> n >> m)
    {
        if (dp[n][m])
            cout << "ldq is the winner!" << endl;
        else
            cout << "Xh is the winner!" << endl;
    }
    return 0;
}
