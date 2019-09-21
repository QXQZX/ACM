#include <cstdio>
#include <iostream>
using namespace std;
int num[101][101];
int b[101][101];
int n;
int main() {
    int i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) scanf("%d", &num[i][j]);
    }
    for (j = 1; j <= n; j++)  //将最低层给数组b
        b[n][j] = num[n][j];
    for (i = n; i > 1; i--)  //从最底层开始往上推
    {
        for (j = 1; j <= i; j++) {
            if (b[i][j] > b[i][j + 1])
                b[i - 1][j] = b[i][j] + num[i - 1][j];
            else
                b[i - 1][j] = b[i][j + 1] + num[i - 1][j];
        }
    }
    printf("%d\n", b[1][1]);
    return 0;
}