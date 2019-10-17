#include <bits/stdc++.h>
using namespace std;
char s1[100], s2[100], ans[100];
int cnt;
void make(int len, char *s1, char *s2)  // 中序、后序 推前序 s1中序s2后序
{
    if (len <= 0) return;
    int i = strchr(s1, s2[len - 1]) -
            s1;  // 从s1中搜索s2[len-1] 并返回地址,地址减去首地址即为子树长度
    ans[cnt++] = s2[len - 1];
    make(i, s1, s2);                        // 递归搜索左子树
    make(len - i - 1, s1 + i + 1, s2 + i);  //递归搜素右子树 存到地址之后
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        scanf("%s %s", s1, s2);
        cnt = 0;
        int len = strlen(s1);
        make(len, s1, s2);
        ans[len] = '\0';  // 不要忘记封口
        cout << ans << endl;
    }
    return 0;
}

/***************************************************
User name: jk180602张国辉
Result: Accepted
Take time: 0ms
Take Memory: 200KB
Submit time: 2018-12-12 17:34:25
****************************************************/