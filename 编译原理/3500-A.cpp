#include <iostream>
using namespace std;

bool is_en(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    } else {
        return false;
    }
}

bool is_integer(char c) {
    if (c >= '0' && c <= '9') {
        return true;
    } else {
        return false;
    }
}
bool is_boundary(char c) {
    if (c == '{' || c == '}' || c == '(' || c == ')' || c == ',' || c == ';') {
        return true;
    } else {
        return false;
    }
}

bool is_operator(char c) {
    if (c == '>' || c == '<' || c == '=' || c == '+' || c == '-' || c == '*' ||
        c == '/' || c == '!') {
        return true;
    } else {
        return false;
    }
}
int main() {
    string s;
    while (cin >> s) {
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (is_boundary(s[i])) {
                cout << "(boundary," << s[i] << ")\n";
            } else if (is_operator(s[i])) {
                if (s[i + 1] == '=') {
                    cout << "(operator," << s[i] << s[i + 1] << ")\n";
                    i++;
                } else {
                    cout << "(operator," << s[i] << ")\n";
                }
            } else if (is_integer(s[i])) {
                cout << "(integer,";
                for (; i < len && is_integer(s[i]); i++) {
                    cout << s[i];
                }
                cout << ")\n";
                i--;
            } else if (is_en(s[i])) {
                int cnt = 0;
                string out = "";
                for (; i < len && (is_en(s[i]) || is_integer(s[i])); i++) {
                    out += s[i];
                    cnt++;
                }
                i--;

                if (cnt == 2) {
                    if (out == "if") {
                        cout << "(keyword," << out << ")" << endl;
                    } else {
                        cout << "(identifier," << out << ")" << endl;
                    }
                } else if (cnt == 3) {
                    if (out == "for" || out == "int") {
                        cout << "(keyword," << out << ")" << endl;
                    } else {
                        cout << "(identifier," << out << ")" << endl;
                    }
                } else if (cnt == 4) {
                    if (out == "else" || out == "main") {
                        cout << "(keyword," << out << ")" << endl;
                    } else {
                        cout << "(identifier," << out << ")" << endl;
                    }
                } else if (cnt == 5) {
                    if (out == "while") {
                        cout << "(keyword," << out << ")" << endl;
                    } else {
                        cout << "(identifier," << out << ")" << endl;
                    }
                } else {
                    cout << "(identifier," << out << ")" << endl;
                }
            }
        }
    }
    return 0;
}