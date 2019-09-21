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

int a[100001];
void qsort(int left, int right);
int main() {
    int n, i;

    while (cin >> n) {
        for (i = 0; i < n; i++) cin >> a[i];
        qsort(0, n - 1);
        int m;
        cin >> m;
        while (m--) {
            int num;
            cin >> num;
            cout << a[num - 1] << endl;
        }
    }
    return 0;
}
void qsort(int left, int right) {
    int i = left, j = right, temp;
    temp = a[left];

    if (left >= right) return;
    while (i != j) {
        while (a[j] <= temp && i < j) {
            j--;
        }
        a[i] = a[j];
        while (a[i] >= temp && i < j) {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = temp;
    qsort(left, i - 1);
    qsort(i + 1, right);
}
