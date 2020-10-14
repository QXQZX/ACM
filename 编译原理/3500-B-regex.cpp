#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    // string re = R"([+-]?\d+((\.\d+)([eE][+-]?\d+)?|([eE][+-]?\d+))$)";
    regex reg(R"([+-]?\d+((\.\d+)([eE][+-]?\d+)?|([eE][+-]?\d+))$)");

    string s;
    cin >> s;
    if (regex_match(s, reg)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}