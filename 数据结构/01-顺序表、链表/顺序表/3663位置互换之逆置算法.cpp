#include <cstdio>
#include <iostream>
#define max 1000005
using namespace std;
int *data;
int m, len;

// 元素翻转   如 1 2 3 4 5   ---》   5 4 3 2 1
void reverse(int begin, int end, int m) {
    for (int i = 0; i < m; i++) {
        int temp = data[begin];
        data[begin++] = data[end];
        data[end--] = temp;
    }
}

int main() {
    int t;
    // 下面两种是在堆里申请内存  int data[1000000] 是在栈里申请
    // data = new int[max];
    data = (int *)malloc(max * sizeof(int));  // 不手动申请内存  会爆内存
    scanf("%d", &len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &data[i]);
    }
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &m);

        reverse(0, len - 1, len / 2);      // 变成 -1 9 8 7 6 5 4 3 2 1
        reverse(len - m, len - 1, m / 2);  // 变成 -1 9 8 7 6 5 4 3   1 2
        reverse(0, len - m - 1, (len - m) / 2);  // 变成 3 4 5 6 7 8 9 -1   1 2

        for (int i = 0; i < len; i++) {
            if (i == len - 1) {
                printf("%d\n", data[i]);
            } else {
                printf("%d ", data[i]);
            }
        }
    }

    return 0;
}
