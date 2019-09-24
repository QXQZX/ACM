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
int nextt[10];
void getnext(char *str) {
    nextt[0] = -1;
    int i = 0, j = -1;
    while (i < strlen(str) - 1) {
        if (j == -1 || str[i] == str[j]) {
            i++;
            j++;
            nextt[i] = j;
        } else
            j = nextt[j];
    }
}
int kmp(char *s, char *p) {
    getnext(p);
    int i = strlen(s) - strlen(p), j = 0;
    if (s[i - 1] != '.') return 0;
    while (i < strlen(s) && j < strlen(p)) {
        if (j == -1 || s[i] == p[j]) {
            j++;
            i++;
        } else
            j = nextt[j];
    }
    if (j == strlen(p))
        return 1;
    else
        return 0;
}
int main() {
    int n;
    char s[145], p[10];
    while (~scanf("%d %s", &n, p)) {
        for (int i = 0; i < n; i++) {
            scanf("%s", s);
            if (kmp(s, p)) printf("%s\n", s);
        }
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 4ms
Take Memory: 188KB
Submit time: 2018-12-06 20:41:46
****************************************************/