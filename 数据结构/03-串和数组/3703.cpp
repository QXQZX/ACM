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
char a[100005];
int main() {
    int t, m, k;
    scanf("%d", &t);
    while (t--) {
        int cnt = 0;
        scanf("%d %d", &m, &k);
        getchar();
        gets(a);
        int len = strlen(a);
        for (int i = 0; i <= len - k; i++) {
            for (int j = i; j <= i + k - 4;
                 j++)  // i+上k比4多的那一块  如k=8时 lllllove
            {
                if (a[j] == 'l' && a[j + 1] == 'o' && a[j + 2] == 'v' &&
                    a[j + 3] == 'e') {
                    cnt++;
                    break;
                }
            }
        }
        if (cnt >= m)
            printf("congratulation\n");
        else
            printf("too ugly to accept\n");
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 208KB
Submit time: 2018-12-10 14:42:07
****************************************************/