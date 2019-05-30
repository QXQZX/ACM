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

void per(int *a, int lt, int rt) {
    int i;
    if (lt == rt) {
        //当lt==rt时,此时a就是其中一个排列,输出a
        for (i = 0; i < lt; i++) {
            printf("%d,", a[i]);
        }
        printf("%d\n", a[i]);
    } else {
        for (i = lt; i <= rt; ++i)  //每个元素与第一个元素交换
        {
            swap(a[i], a[lt]);
            per(a, lt + 1, rt);  //递归调用
            swap(a[i], a[lt]);   //最后,将元素交换回来,复原
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, i;
        scanf("%d", &n);
        int num[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        per(num, 0, n - 1);
    }

    return 0;
}