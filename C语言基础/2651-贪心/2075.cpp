#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int c, i, j;
    while (~scanf("%d", &c)) {
        int flag = 0, a[30001], b[30001] = {0};
        int cnt = 1;
        for (i = 0; i < c; i++) {
            scanf("%d", &a[i]);
        }
        b[0] = a[0];
        for (i = 1; i < c; i++) {
            for (j = 0; b[j] != 0; j++) {
                if (a[i] <= b[j]) {
                    flag = 1;
                    break;
                } else if (a[i] > b[j])
                    flag = 0;
            }
            b[j] = a[i];
            if (!flag) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
