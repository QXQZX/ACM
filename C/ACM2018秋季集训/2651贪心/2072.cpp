#include <cstring>
#include <iostream>  //百度解
using namespace std;
int main() {
    char str[111];  //用字符串存储数字
    int s, i, j;    //删掉的数字个数
    while (~scanf("%s %d", str, &s)) {
        while (s--) {
            for (i = 0; i < strlen(str) - 1; i++) {
                if (str[i] > str[i + 1]) break;
            }
            //删除前一个数
            for (j = i; j < strlen(str); j++)
                str[j] = str[j + 1];  //从该数开始，后一个数字覆盖前一个
        }
        //跳过前几位的'0'
        for (i = 0; i < strlen(str) - 1 && str[i] == '0'; i++)
            ;
        for (; i < strlen(str); i++) printf("%c", str[i]);

        printf("\n");
    }
    return 0;
}
// #include <c++/4.2.1/bits/stdc++.h>
// using namespace std;
// int main() {
//     char str[111];
//     int n;
//     while (cin >> str >> n) {
//         int i;
//         while (n--) {
//             for (i = 0; i < strlen(str) - 1; i++) {
//                 if (str[i] > str[i + 1]) break;
//             }
//             for (; i < strlen(str); i++) {
//                 str[i] = str[i + 1];
//             }
//         }

//         for (i = 0; i < strlen(str) - 1 && str[i] == '0'; i++) {
//             ;
//         }
//         for (; i < strlen(str); i++) cout << str[i];

//         cout << endl;
//     }
//     return 0;
// }