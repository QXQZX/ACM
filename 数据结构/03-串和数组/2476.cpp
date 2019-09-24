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
    while (~scanf("%d", &n)) {
        if (n == 0) break;
        scanf("%s", s);
        get_next(s);
        cnt++;
        printf("Test case #%d\n", cnt);
        for (int i = 2; i <= n; i++) {
            if (i % (i - nextt[i]) == 0 && nextt[i])
                printf("%d %d\n", i, i / (i - nextt[i]));
        }
        printf("\n");
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 64ms
Take Memory: 1016KB
Submit time: 2018-12-12 22:15:42
****************************************************/