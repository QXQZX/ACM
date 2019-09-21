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
    int t, n, m, num;
    char s[10];
    int stack[101];

    cin >> t;
    while (t--) {
        cin >> m >> n;
        int top = 0;
        while (n--) {
            scanf("%s", s);
            if (strcmp(s, "P") == 0) {
                cin >> num;
                if (top >= m) {
                    cout << "F" << endl;
                } else {
                    stack[++top] = num;
                }
            } else if (strcmp(s, "O") == 0) {
                if (top == 0) {
                    cout << "E" << endl;
                } else {
                    cout << stack[top--] << endl;
                }
            } else if (strcmp(s, "A") == 0) {
                if (top == 0) {
                    cout << "E" << endl;
                } else {
                    cout << stack[top] << endl;
                }
            }
        }
        printf(t == 0 ? "" : "\n");
    }
    return 0;
}