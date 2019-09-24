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
#define N 1000001
char s[N];
int nextt[N];
void get_next(char *s) {
    int i = 0, j = -1;
    int len = strlen(s);
    nextt[0] = -1;
    while (i <= len) {
        if (j == -1 || s[i] == s[j]) {
            i++;
            j++;
            nextt[i] = j;
        } else
            j = nextt[j];
    }
}
int main() {
    int n;
    int cnt = 0;
    while (~scanf("%s", s)) {
        if (s[0] == '.') break;
        n = strlen(s);
        get_next(s);
        if (n % (n - nextt[n]) == 0 && nextt[n])
            printf("%d\n", n / (n - nextt[n]));
        else
            printf("%d\n", 1);
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 72ms
Take Memory: 1000KB
Submit time: 2018-12-12 22:21:33
****************************************************/