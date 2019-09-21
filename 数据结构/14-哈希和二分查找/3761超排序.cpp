#include <bits/stdc++.h>
using namespace std;
char s[1000005];
int ans[222];
int main()
{
    while (~scanf("%s", s))
    {
        memset(ans, 0, sizeof(ans));
        int len = strlen(s);
        for (int i = 0; i < len; i++)
            ans[s[i]]++;
        int cnt = 0;
        for (char i = 'A'; i <= 'Z'; i++)
        {
            for (int j = 0; j < ans[i]; j++)
                s[cnt++] = i;
        }
        for (char i = 'a'; i <= 'z'; i++)
        {
            for (int j = 0; j < ans[i]; j++)
                s[cnt++] = i;
        }
        printf("%s\n", s);
    }
    return 0;
}