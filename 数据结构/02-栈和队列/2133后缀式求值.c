#include <stdio.h>
#include <string.h>
int top = 0, i, b[1000];
int main() {
    char s;
    while (scanf("%c", &s), s != '#') {
        if (s >= '0' && s <= '9') {
            b[++top] = s - '0';
        } else if (s == '+' || s == '-' || s == '*' || s == '/') {
            if (s == '+') {
                b[top - 1] = b[top - 1] + b[top];
                top--;
            }
            if (s == '-') {
                b[top - 1] = b[top - 1] - b[top];
                top--;
            }
            if (s == '*') {
                b[top - 1] = b[top - 1] * b[top];
                top--;
            }
            if (s == '/') {
                b[top - 1] = b[top - 1] / b[top];
                top--;
            }
        }
    }
    printf("%d\n", b[top]);
    return 0;
}