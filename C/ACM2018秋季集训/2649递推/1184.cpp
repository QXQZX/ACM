#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
// int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int t;
    double h, n;
    cin >> t;
    while (t--) {
        scanf("%lf %lf", &h, &n);
        double sum = 0;
        double h1 = h;
        for (int i = 0; i < n; i++) {
            sum += h1 + (h1 / 2.0);
            h1 /= 2.0;
        }
        while (n--) {
            h /= 2.0;
        }
        printf("%.2lf %.2lf\n", sum - h, h);
    }
    return 0;
}