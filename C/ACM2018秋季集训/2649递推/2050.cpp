#include <iostream>
using namespace std;
int main() {
    int n, a[111];
    cin >> n;
    a[1] = 2;
    for (int i = 2; i <= n; i++) {
        a[i] = i + a[i - 1];
    }
    cout << a[n] << endl;
    return 0;
}