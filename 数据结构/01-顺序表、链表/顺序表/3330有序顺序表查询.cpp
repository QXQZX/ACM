#include <algorithm>
#include <cstdio>
#include <iostream>
#define max 100005
using namespace std;
int *a;
int n, t, m;

int binary_search(int begin, int end, int num) {
    // if (begin <= end) {
    //     int mid = (begin + end) / 2;
    //     if (a[mid] < num) {
    //         return binary_search(mid + 1, end, num);
    //     } else if (a[mid] > num) {
    //         return binary_search(begin, mid - 1, num);
    //     } else {
    //         return mid + 1;
    //     }
    // }
    // return -1;
    while (begin <= end) {
        int mid = (begin + end) / 2;
        if (a[mid] < num) {
            begin = mid + 1;
        } else if (a[mid] > num) {
            end = mid - 1;
        } else {
            return mid + 1;
        }
    }
    return -1;
}
int main() {
    a = (int *)malloc(max * sizeof(int));
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    cin >> t;
    while (t--) {
        cin >> m;

        int ans = binary_search(0, n, m);
        if (ans == -1) {
            cout << "No Found!" << endl;
        } else {
            cout << ans << endl;
        }
    }
}