#include <c++/4.2.1/bits/stdc++.h>
using namespace std;
struct node {
    int data[10005];  //存放data数据
    int mark[10005];  // 标记是否重复
};

node *p = new node;
// 建立顺序表
void build(int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &p->data[i]);
        p->mark[i] = 1;
    }
}
// 打印顺序表
void print(int n) {
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (flag) {
            cout << p->data[i];
            flag = 0;
            ;
        } else if (p->mark[i]) {
            cout << " " << p->data[i];
        }
        for (int j = i + 1; j < n; j++) {
            if (p->data[i] == p->data[j]) {
                p->mark[j] = 0;
            }
        }
    }
    cout << endl;
}
int main(int argc, char const *argv[]) {
    int t, m, n;
    cin >> t;
    while (t--) {
        // free(p);
        scanf("%d", &n);
        build(n);
        print(n);
    }
    return 0;
}
