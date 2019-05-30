#include <iostream>
using namespace std;
int s[31][31][31] = {0};
int f(int a, int b, int c);
int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        // memset(s, 0, sizeof(s));
        cout << f(a, b, c) << endl;
    }
    return 0;
}
int f(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return f(20, 20, 20);

    if (s[a][b][c]) return s[a][b][c];
    if (a < b && b < c)
        s[a][b][c] = f(a, b, c - 1) + f(a, b - 1, c - 1) - f(a, b - 1, c);
    else
        s[a][b][c] = f(a - 1, b, c) + f(a - 1, b - 1, c) + f(a - 1, b, c - 1) -
                     f(a - 1, b - 1, c - 1);

    return s[a][b][c];
}