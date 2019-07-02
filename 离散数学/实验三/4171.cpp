#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int arr[110];  // 存放群中的数据
int num[110];  // 存放逆元
int b[110];    // 存放要查询的数据
int main() {
    int n, m, q;
    while (cin >> n >> m >> q) {
        int flag = 0;
        memset(num, -1, sizeof(num));

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) flag = 1;  // 要想G是群   0必须存在
        }
        for (int i = 1; i <= q; i++) {
            cin >> b[i];
        }

        num[0] = 0;  // 0的逆元是0
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                // 在群中找每个元素的逆元  即 元素i 和 元素j 都在群中 且
                // i+j%m==0
                if (flag && (arr[i] + arr[j]) % m == 0) {
                    num[arr[i]] = arr[j];
                    num[arr[j]] = arr[i];
                    break;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (num[arr[i]] == -1) {  // 要想成群  每个元素都有逆元
                flag = 0;
            }
        }

        if (!flag) {
            cout << "-1" << endl;
        } else {
            for (int i = 1; i <= q; i++) {
                cout << num[b[i]] << endl;
            }
        }
    }
    return 0;
}