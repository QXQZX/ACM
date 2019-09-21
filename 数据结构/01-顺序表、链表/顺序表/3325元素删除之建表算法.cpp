#include <c++/4.2.1/bits/stdc++.h>
using namespace std;

int data[10005];  //存放data数据

int cnt;
// 建立顺序表
void build(int n) {
    int num;
    for (int j = 0, i = 0; i < n; i++) {
        cin >> num;
        for (j = 0; j < cnt; j++) {
            if (num == data[j]) {
                break;
            }
        }
        if (j == cnt) {
            data[cnt++] = num;
        }
    }
}
// 打印顺序表
void print() {
    for (int i = 0; i < cnt; i++) {
        if (i == 0) {
            cout << data[i];
        } else {
            cout << " " << data[i];
        }
    }
    cout << endl;
}
int main(int argc, char const *argv[]) {
    int t, m, n;
    cin >> t;
    while (t--) {
        cnt = 0;
        scanf("%d", &n);
        build(n);
        print();
    }
    return 0;
}
