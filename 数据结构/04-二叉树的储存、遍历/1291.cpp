#include <bits/stdc++.h>
using namespace std;
void make(int len, char *s1, char *s2, char *s)  // s1为先序 s2为中序
{
    int i;
    if (len <= 0)
        return;  // return 必不可少 否则死循环
    else {
        for (i = 0; i < len; i++) {
            if (s1[0] == s2[i])  // 在中序中搜索根节点 实现递归
                break;
        }
    }
    // 关键部分
    make(i, s1 + 1, s2, s);  // 搜索上次搜索左侧部分
    make(len - i - 1, s1 + i + 1, s2 + i + 1, s + i);  // 搜索上次搜索右侧部分
    s[len - 1] = s1[0];  // 后序输出 把递归找出的根节点从后存入
}
int main() {
    char s1[100], s2[100], s[100];
    scanf("%s %s", s1, s2);
    int len = strlen(s1);
    // s[len] = '\0'; // 不要忘记封口
    make(len, s1, s2, s);
    s[len] = '\0';  // 不要忘记封口
    cout << s << endl;
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 188KB
Submit time: 2018-12-12 22:23:29
****************************************************/