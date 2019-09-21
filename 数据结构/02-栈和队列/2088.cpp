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
    int n, m, flag;
    string a, b;
    while (cin >> n >> m) {
        flag = 0;
        queue<string> q;
        stack<string> s;
        while (m--) {
            cin >> a;
            if (a == "Add") {
                cin >> b;
                if (s.size() < n) {
                    s.push(b);  // 有车位 进入停车栈
                } else
                    q.push(b);  // 无车位 进入排队队列
            }
            if (a == "Del") {
                if (s.empty())
                    flag = 1;
                else {
                    s.pop();
                    if (!q.empty()) s.push(q.front());  // 排队车 进入 停车栈
                }
            }
            if (a == "Out") {
                if (q.empty())
                    flag = 1;
                else
                    q.pop();
            }
        }
        if (flag == 1)
            cout << "Error" << endl;
        else {
            while (!s.empty()) {
                cout << s.top() << endl;
                s.pop();
            }
        }
    }
}