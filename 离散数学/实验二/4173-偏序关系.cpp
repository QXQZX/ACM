/**
 * 偏序关系
 * 自反性   反对称性    传递性
 */
#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int n, a[111][111];
int main() {
    int x, y;
    while (cin >> n) {
        int flag = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            // 判断是否 满足  自反性
            if (!a[i][i]) {
                flag = 0;
                break;
            }

            for (int j = 0; j < n; j++) {
                //判断是否满足反对称
                if (a[i][j] && a[j][i] && i != j) {
                    flag = 0;
                    break;
                }
                // 判断是否满足传递
                if (a[i][j]) {
                    for (int k = 0; k < n; k++) {
                        if (a[j][k] && !a[i][k]) {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
        }
        printf(flag == 1 ? "yes\n" : "no\n");
    }
    return 0;
}