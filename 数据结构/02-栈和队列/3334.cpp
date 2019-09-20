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
    int t, n, m;
    int a[10001];
    int b[10001];  // 栈
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> t;
    while (t--) {
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int stack[10001], top = 0;
        for (int i = 0, j = 0; j < n;) {
            if (a[i] == b[j]) {
                i++;
                j++;
            } else if (top != 0 && stack[top] == b[j]) {
                j++;
                top--;
            } else if (i < n) {
                stack[++top] = a[i++];
            } else {
                break;
            }
        }
        printf(top == 0 ? "yes\n" : "no\n");
    }

    return 0;
}