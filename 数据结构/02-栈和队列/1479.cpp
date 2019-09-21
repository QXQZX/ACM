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
    char s[255];
    while (gets(s)) {
        char stack[255];
        int top = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == '#') {
                if (top != 0) {
                    top--;
                }
            } else if (s[i] == '@') {
                top = 0;
            } else {
                stack[++top] = s[i];
            }
        }
        if (top != 0) {
            for (int i = 1; i <= top; i++) {  // 注意i从1 开始 否则报错
                cout << stack[i];
            }
            cout << endl;
        }
    }
    return 0;
}
