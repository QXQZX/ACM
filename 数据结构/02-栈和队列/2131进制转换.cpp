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
int main() {
    int n, m;
    int top = 0;
    int a[100005];

    cin >> n;
    cin >> m;
    while ((n / m) != 0) {
        a[top++] = n % m;
        n /= m;
    }
    a[top++] = n;
    for (int i = top - 1; i >= 0; i--) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}