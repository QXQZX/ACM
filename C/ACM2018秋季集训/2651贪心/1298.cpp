#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    int start;
    int tend;
    int id;      //活动序号
    int select;  //是否选择该活动
};
int main() {
    node t, act[111];
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> act[i].start >> act[i].tend;
        act[i].id = i + 1;
        act[i].select = 0;
    }
    //以结束时间的大小对活动进行排序
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (act[i].tend > act[j].tend) {
                t = act[i];
                act[i] = act[j];
                act[j] = t;
            }
        }
    }
    int temp = 0;  //初始化第一个活动的前一活动(假设)结束时间为0
    for (i = 0; i < n; i++) {
        if (act[i].start >= temp) {
            act[i].select = 1;
            temp = act[i].tend;
        }
    }
    for (i = 0; i < n; i++) {
        if (i == 0)
            cout << act[i].id;
        else if (act[i].select == 1)
            cout << ',' << act[i].id;
    }
    return 0;
}
