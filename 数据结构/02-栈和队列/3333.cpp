#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;
int main() {
    int t, n;
    int a[100001];      // 存放输入值
    int b[100001];      // 存放较大值
    int stack[100001];  // 栈
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        b[n - 1] = -1;  // 顺序输入的最后一个数无较大值
        int top = 0;    // 栈空
        for (int i = n - 2; i >= 0; i--) {
            int flag = 0;
            if (a[i + 1] > a[i]) {
                b[i] = a[i + 1];
                stack[++top] = a[i + 1];  // 较大的入栈
            } else {
                while (top != 0) {
                    if (stack[top] > a[i]) {
                        b[i] = stack[top];
                        flag = 1;
                        break;
                    }
                    top--;
                }
                if (flag == 0) b[i] = -1;  // 如果栈内没有比a[i]更大的
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << "-->" << b[i] << endl;
        }
        if (t != 0) cout << endl;
    }

    return 0;
}