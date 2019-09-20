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
/*
    中缀表达式转后缀表达式的方法：
    1.遇到操作数：直接输出（添加到后缀表达式中）
    2.栈为空时，遇到运算符，直接入栈
    3.遇到左括号：将其入栈
    4.遇到右括号：执行出栈操作，并将出栈的元素输出，直到弹出栈的是左括号，左括号不输出。
    5.遇到其他运算符：加减乘除：弹出所有优先级大于或者等于该运算符的栈顶元素，然后将该运算符入栈
    6.最终将栈中的元素依次出栈，输出。
*/
using namespace std;
int top = 0;
int main() {
    char s[100001], stack[100001];
    scanf("%s", s);
    for (int i = 0; s[i] != '#'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            printf("%c", s[i]);
        } else if (s[i] == '(') {
            stack[++top] = s[i];
        } else if (s[i] == ')') {
            while (stack[top] != '(') {
                printf("%c", stack[top--]);
            }
            top--;
        } else if (s[i] == '+' || s[i] == '-') {
            while (top != 0 && stack[top] != '(') {
                printf("%c", stack[top--]);
            }
            stack[++top] = s[i];
        } else if (s[i] == '*' || s[i] == '/') {
            while (top != 0 && stack[top] != '(' &&
                   (stack[top] == '*' || stack[top] == '/')) {
                printf("%c", stack[top--]);
            }
            stack[++top] = s[i];
        }
    }
    while (top != 0) {
        printf("%c", stack[top--]);
    }
    return 0;
}