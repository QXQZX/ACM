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
int judge(char c) {
    if (c >= 'a' && c <= 'z')
        return 1;
    else if (c >= 'A' && c <= 'Z')
        return 2;
    else if (c >= '0' && c <= '9')
        return 3;
    else
        return 0;  // 注意-----c-k这种情况的输出 巨坑
}
int main() {
    int n;
    cin >> n;
    char s[1111];
    while (n--) {
        cin >> s;
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            if (s[i] != '-')
                putchar(s[i]);
            else if (s[i] == '-' && judge(s[i - 1]) && judge(s[i + 1]) &&
                     judge(s[i - 1]) == judge(s[i + 1]) &&
                     s[i - 1] <= s[i + 1]) {
                for (char j = s[i - 1] + 1; j < s[i + 1]; j++) putchar(j);
            } else
                cout << "-";
        }
        cout << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 4ms
Take Memory: 196KB
Submit time: 2018-12-09 14:11:19
****************************************************/