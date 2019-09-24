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
int nextt[1000005];
void get_next(char str2[]) {
    int len = strlen(str2);
    nextt[0] = -1;
    int j = -1, i = 0;
    while (i < len) {
        if (j == -1 || str2[i] == str2[j]) {
            i++;
            j++;
            nextt[i] = j;
        } else
            j = nextt[j];  // 失配回溯
    }
}
int kmp(char str1[], char str2[]) {
    get_next(str2);
    int len1 = strlen(str1), len2 = strlen(str2);
    int i = 0, j = 0;
    while (i < len1 && j < len2) {
        if (j == -1 || str1[i] == str2[j]) {
            i++;
            j++;
        } else
            j = nextt[j];  // 失配回溯
    }
    if (j >= len2)
        return i - len2 + 1;
    else
        return -1;
}
int main() {
    char str1[1000005], str2[1000005];
    int n;
    scanf("%d", &n);
    while (n--) {
        scanf("%s %s", str1, str2);
        if (kmp(str1, str2) != -1)
            printf("%d\n", kmp(str1, str2));
        else
            printf("::>_<::\n");
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 192ms
Take Memory: 1220KB
Submit time: 2018-12-08 21:43:54
****************************************************/