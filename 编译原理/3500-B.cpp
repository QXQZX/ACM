#include <iostream>
using namespace std;
// 判断是否全为数字
bool r_judge(string s) {
    int len = s.length();
    if (len == 0) return false;
    int i = 0, j = 0;

    for (j = len - 1; j >= i; j--) {
        if (s[j] != ' ') break;
    }

    if (s[i] == '+' || s[i] == '-') i++;
    for (; i < j + 1; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            continue;
        } else {
            return false;
        }
    }
    return true;
}
bool l_judge(string s) {
    int pos;
    if ((pos = s.find(".")) != string::npos) {
        string ll = s.substr(0, pos);
        string lr = s.substr(pos + 1, s.length());
        if (r_judge(ll) && r_judge(lr)) {
            return true;
        } else {
            return false;
        }
    } else {
        if (r_judge(s)) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int pos;
    if ((pos = s.find("e")) != string::npos) {
        string l = s.substr(0, pos);
        string r = s.substr(pos + 1, s.length());
        if (l_judge(l) && r_judge(r))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else if ((pos = s.find("E")) != string::npos) {
        string l = s.substr(0, pos);
        string r = s.substr(pos + 1, s.length());
        if (l_judge(l) && r_judge(r))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else if (s.find(".") != string::npos) {
        if (l_judge(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}