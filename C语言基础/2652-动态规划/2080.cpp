#include <cstring>
#include <iostream>
using namespace std;
char str1[1000], str2[1000];
int dp[1000][1000];
void solve() {
    for (int i = 0; i < strlen(str1); i++) {
        for (int j = 0; j < strlen(str2); j++) {
            if (str1[i] == str2[j])
                dp[i + 1][j + 1] = dp[i][j] + 1;
            else
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
        }
    }
    cout << dp[strlen(str1)][strlen(str2)] << endl;
}
int main() {
    while (~scanf("%s %s", str1, str2)) {
        solve();
    }
    return 0;
}
