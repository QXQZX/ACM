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
int date[52];
int main() {
    char a[55];
    int i, top, base, len;
    while (gets(a)) {
        top = 0;
        base = 0;
        len = strlen(a);
        for (i = 0; i < len; i++) {
            if (a[i] == '(' || a[i] == '[' || a[i] == '{')
                date[top++] = a[i];
            else if ((a[i] == ')' || a[i] == ']' || a[i] == '}')) {
                if (top == base)
                    break;  //只有右括号，括号不匹配，结束查找
                else {
                    if ((date[top - 1] == '(' && a[i] == ')') ||
                        (date[top - 1] == '[' && a[i] == ']') ||
                        (date[top - 1] == '{' && a[i] == '}'))
                        top--;
                    else
                        break;
                }
            }
        }
        if (top == 0 && i == len)
            printf("yes\n");  //栈为空且字符串查找完成
        else
            printf("no\n");
    }
    return 0;
}