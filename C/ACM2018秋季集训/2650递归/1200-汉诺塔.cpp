#include <cstdio>
#include <iostream>
using namespace std;
void move(int n, char a, char b, char c);
int main() {
    int n;
    cin >> n;
    move(n, 'A', 'B', 'C');
    cout << endl;
    return 0;
}
void move(int n, char a, char b, char c) {
    if (n == 1)
        printf("Move disk %d from %c to %c\n", n, a, c);
    else {
        move(n - 1, a, c, b);  // 源柱子  借助柱子  目标柱子
        printf("Move disk %d from %c to %c\n", n, a, c);
        move(n - 1, b, a, c);
    }
}