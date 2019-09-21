#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    int a[23][23];
    int n;
    while (cin >> n) {
        int ans[300];
        memset(ans, 0, sizeof(ans));
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
            for (int j = 1; j <= i; j++) {
                if (j == 1 || j == i) {
                    a[i][j] = 1;
                } else
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
        int cnt = 0;
        int l = 1, r = n;
        int h = n;
        int top = 1;

        while (cnt < sum) {
            for (int i = top; i <= h; i++) ans[cnt++] = a[i][l];

            for (int i = l + 1; i <= r - 1; i++) ans[cnt++] = a[h][i];

            for (int i = h; i >= top + 1; i--) ans[cnt++] = a[i][r--];

            r = n - 2;
            n -= 2;
            l++;
            h--;
            top += 2;
        }
        // for (int i=0;i<sum;i++)
        //     cout<<ans[i]<<' ';
        int len;
        for (int i = 1; i <= 18; i++) {
            if (i * i >= sum) {
                len = i;
                break;
            }
        }
        cnt = 0;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (ans[cnt] > 0) {
                    if (j == len - 1)
                        cout << ans[cnt++] << endl;
                    else
                        cout << ans[cnt++] << ' ';
                } else {
                    if (j == len - 1)
                        cout << "0" << endl;
                    else
                        cout << "0" << ' ';
                }
            }
        }
    }
    return 0;
}
