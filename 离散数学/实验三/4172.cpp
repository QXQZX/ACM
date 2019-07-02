/**
 * 题目中已说s是有限群 所有不必管s的数据只要判定s1是否构成群即可
 */
#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
int arr[111];  // 存放群s的数据
int brr[111];  // 存放群s1数据
int num[111];  // 存放群s1内元素的逆元（不存在逆元 就不能构成群）
int main() {
    int n, m, q;
    while (cin >> n >> m >> q) {
        int flag = 0;
        memset(num, -1, sizeof(num));

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        for (int i = 1; i <= q; i++) {
            cin >> brr[i];
            if (brr[i] == 0) flag = 1;  // 要想s1是群   0必须存在
        }

        num[0] = 0;  // 0的逆元是0
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                // 在群中找每个元素的逆元  即 元素i 和 元素j 都在群中 且
                // i+j%m==0
                if (flag && (brr[i] + brr[j]) % m == 0) {
                    num[brr[i]] = brr[j];
                    num[brr[j]] = brr[i];
                    break;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (num[brr[i]] == -1) {  // 要想成群  每个元素都有逆元
                flag = 0;
            }
        }
        printf(flag == 0 ? "NO\n" : "YES\n");
    }
    return 0;
}