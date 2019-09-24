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
int judge(char *str) {
    int x = strlen(str);
    char *p = str, *q = str + x - 1;  //不加str的话会出现warning
    while (p < q) {
        if (*p == ' ') {
            p++;
            continue;  //如果*p是空格，则再次循环
        }
        if (*q == ' ') {
            q--;
            continue;
        }
        if (*p == *q) {
            p++;
            q--;
        } else
            return 0;
    }
    return 1;
}
int main() {
    char str[100001];
    while (gets(str))  //必须用gets读入，因为字符串中有空格
    {
        if (strcmp(str, "2013") == 0) break;
        if (judge(str))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 232KB
Submit time: 2018-11-28 15:34:20
****************************************************/