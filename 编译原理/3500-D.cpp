#include <stdio.h>
#include <stdlib.h>
char s[55];
int cnt = 0, i = 0;

void E();
void G();
void T();
void S();
void F();

// if()里判断的是表达式左边的First集 要是First集都没满足直接判断错误退出程序
// 由于递归没法完全退出,只能退出程序所以用 exit(0)表示程序正常退出
// exit(1)表示程序异常退出需要#include <stdlib.h>头
// 遇到终结符(除了空)就要i++  即 跳到下一个字符

void E() {
    if (s[i] == '(' || s[i] == 'i') {
        printf("%d E-->TG\n", cnt++);
        T();
        G();
    } else {
        printf("error\n");
        exit(0);
    }
}

void G() {
    if (s[i] == '+') {
        printf("%d G-->+TG\n", cnt++);
        i++;
        T();
        G();
    } else {
        printf("%d G-->&\n", cnt++);
    }
}

void T() {
    if (s[i] == '(' || s[i] == 'i') {
        printf("%d T-->FS\n", cnt++);
        F();
        S();
    } else {
        printf("error\n");
        exit(0);
    }
}

void S() {
    if (s[i] == '*') {
        printf("%d S-->*FS\n", cnt++);
        i++;
        F();
        S();
    } else {
        printf("%d S-->&\n", cnt++);
    }
}
void F() {
    if (s[i] == '(') {
        printf("%d F-->(E)\n", cnt++);
        i++;
        E();
        if (s[i] == ')') {
            i++;
        } else {
            printf("error\n");
            exit(0);
        }
    } else if (s[i] == 'i') {
        printf("%d F-->i\n", cnt++);
        i++;
    } else {
        printf("error\n");
        exit(0);
    }
}
int main() {
    scanf("%s", s);
    E();
    if (s[i] == '#') {
        printf("accept\n");
    } else {
        printf("error\n");
    }
    return 0;
}