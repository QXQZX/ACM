#include <bits/stdc++.h>
using namespace std;
int nextt[1000005];
int ans;
void get_next(char str2[])
{
    int len = strlen(str2);
    nextt[0] = -1;
    int j = -1, i = 0;
    while (i < len)
    {
        if (j == -1 || str2[i] == str2[j])
        {
            i++;
            j++;
            nextt[i] = j;
        }
        else
            j = nextt[j]; // 失配回溯
    }
}
void kmp(char str1[], char str2[])
{
    get_next(str2);
    int len1 = strlen(str1), len2 = strlen(str2);
    int i = 0, j = 0;
    while (i < len1 && j < len2)
    {
        if (j == 0 || str1[i] == str2[j])
        {
            i++;
            j++;
        }
        else
            j = nextt[j]; // 失配回溯
        if (j == len2)
        {
            ans++;
            j = 0;
            i -= len2 - 1;
        }
    }
}

int main()
{
    char str1[1000005], str2[1000005];
    while (~scanf("%s", str1))
    {
        scanf("%s", str2);
        ans = 0;
        kmp(str1, str2);
        printf("%d\n", ans);
    }
    return 0;
}
