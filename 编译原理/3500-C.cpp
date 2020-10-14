#include <iostream>
using namespace std;
struct row {
    string op;
    string exp;
};

int main() {
    int row_num;
    row r[110];
    while (cin >> row_num) {
        cin >> r[row_num].op;
        if (r[row_num].op == "STOP") {
            continue;
        } else {
            cin >> r[row_num].exp;
        }
    }

    int var[256] = {0};  // 初始化变量池，索引为字母,值为数字
    for (int i = 1; i <= row_num;) {
        if (r[i].op == "LET") {
            int var_name = (int)(r[i].exp[0] - 'A');  // 变量名字
            int exp_len = r[i].exp.length();
            int var_value = 0;  // 变量值
            int t = 1;          // 数位因子

            // LET X=[-][0-9]
            if ((r[i].exp[2] >= '0' && r[i].exp[2] <= '9') ||
                r[i].exp[2] == '-') {
                int j;
                for (j = exp_len - 1; r[i].exp[j] != '=' && r[i].exp[j] != '-';
                     j--) {
                    var_value += (r[i].exp[j] - '0') * t;
                    t *= 10;
                }
                if (r[i].exp[j] == '-') {
                    var_value = -var_value;
                }

            } else if (r[i].exp[3] == '>') {  // LET X=A>B
                int m1 = r[i].exp[2] - 'A';
                int m2 = r[i].exp[4] - 'A';
                var_value = (var[m1] > var[m2]) ? 1 : 0;
            } else if (r[i].exp[3] == '+') {  // LET X=A+B
                int m1 = r[i].exp[2] - 'A';
                int m2 = r[i].exp[4] - 'A';
                var_value = var[m1] + var[m2];
            }
            var[var_name] = var_value;
            i++;
        } else if (r[i].op == "PRINT") {
            printf("%c=%d\n", r[i].exp[0], var[r[i].exp[0] - 'A']);
            i++;
        } else if (r[i].op == "GOTO") {
            int exp_len = r[i].exp.length();
            int row_dist = 0;  // 要GOTO的行
            int t = 1;         // 数位因子

            for (int j = exp_len - 1; j >= 0; j--) {
                row_dist += (r[i].exp[j] - '0') * t;
                t *= 10;
            }
            i = row_dist;
        } else if (r[i].op == "IF") {
            int m1 = r[i].exp[0] - 'A';
            int m2 = r[i].exp[2] - 'A';
            // 表达式为0 走两行（!m1>m2）
            if (var[m1] <= var[m2]) {
                i++;
            }
            i++;
        } else if (r[i].op == "STOP") {
            break;
        }
    }

    return 0;
}