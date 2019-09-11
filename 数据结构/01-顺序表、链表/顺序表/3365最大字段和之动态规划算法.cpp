#include <stdlib.h>
#include <cstdio>
#include <iostream>
int main() {
    int n, sum, max, i, a[100005];
    scanf("%d", &n);
    sum = 0;
    max = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);  //将元素存在数组当中
    }
    for (i = 0; i < n; i++) {
        sum += a[i];
        if (sum < 0) {
            sum = 0;
        }
        if (sum > max) {
            max = sum;
        }
    }
    printf("%d\n", max);
}