#include <bits/stdc++.h>
using namespace std;
char s1[10];
char s[10][10];
int main()
{
    int n, m;
    while (~scanf("%s", s1))
    {
        int flag = 0;
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
                cin >> s[i][j];
        }
        if (strcmp(s1, "BLACK") == 0)
        {
            cin >> n >> m;
            s[n][m] = 'B';

            for (int i = m + 1; i <= 8; i++) // 找右
            {
                if (s[n][i] == '.')
                    break;
                if (s[n][i] == 'W')
                    continue;
                if (s[n][i] == 'B')
                {
                    for (int j = i - 1; j >= m + 1; j--)
                    {
                        s[n][j] = 'B';
                        flag = 1;
                    }

                    break;
                }
            }
            for (int i = m - 1; i >= 0; i--) // 左
            {
                if (s[n][i] == '.')
                    break;
                if (s[n][i] == 'W')
                    continue;
                if (s[n][i] == 'B')
                {
                    for (int j = i + 1; j <= m - 1; j++)
                    {
                        s[n][j] = 'B';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n + i <= 8; i++) // 找下
            {
                if (s[n + i][m] == '.')
                    break;
                if (s[n + i][m] == 'W')
                    continue;
                if (s[n + i][m] == 'B')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n + j][m] = 'B';
                        flag = 1;
                    }

                    break;
                }
            }
            for (int i = 1; n - i >= 0; i++) // 上
            {
                if (s[n - i][m] == '.')
                    break;
                if (s[n - i][m] == 'W')
                    continue;
                if (s[n - i][m] == 'B')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n - j][m] = 'B';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n - i >= 0 && m + i <= 8; i++) // 右上
            {
                if (s[n - i][m + i] == '.')
                    break;
                if (s[n - i][m + i] == 'W')
                    continue;
                if (s[n - i][m + i] == 'B')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n - j][m + j] = 'B';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n + i <= 8 && m - i >= 0; i++) // 左下
            {
                if (s[n + i][m - i] == '.')
                    break;
                if (s[n + i][m - i] == 'W')
                    continue;
                if (s[n + i][m - i] == 'B')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n + j][m - j] = 'B';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n - i >= 0 && m - i >= 0; i++) // 左上
            {
                if (s[n - i][m - i] == '.')
                    break;
                if (s[n - i][m - i] == 'W')
                    continue;
                if (s[n - i][m - i] == 'B')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n - j][m - j] = 'B';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n + i <= 8 && m + i <= 8; i++) // 右下
            {
                if (s[n + i][m + i] == '.')
                    break;
                if (s[n + i][m + i] == 'W')
                    continue;
                if (s[n + i][m + i] == 'B')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n + j][m + j] = 'B';
                        flag = 1;
                    }
                    break;
                }
            }
        }
        if (strcmp(s1, "WHITE") == 0)
        {
            cin >> n >> m;
            s[n][m] = 'W';
            for (int i = m + 1; i <= 8; i++) // 找右
            {
                if (s[n][i] == '.')
                    break;
                if (s[n][i] == 'B')
                    continue;
                if (s[n][i] == 'W')
                {
                    for (int j = i - 1; j >= m + 1; j--)
                    {
                        s[n][j] = 'W';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = m - 1; i >= 0; i--) // 左
            {
                if (s[n][i] == '.')
                    break;
                if (s[n][i] == 'B')
                    continue;
                if (s[n][i] == 'W')
                {
                    for (int j = i + 1; j <= m - 1; j++)
                    {
                        s[n][j] = 'W';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n + i <= 8; i++) // 找下
            {
                if (s[n + i][m] == '.')
                    break;
                if (s[n + i][m] == 'B')
                    continue;
                if (s[n + i][m] == 'W')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n + j][m] = 'W';
                        flag = 1;
                    }

                    break;
                }
            }
            for (int i = 1; n - i >= 0; i++) // 上
            {
                if (s[n - i][m] == '.')
                    break;
                if (s[n - i][m] == 'B')
                    continue;
                if (s[n - i][m] == 'W')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n - j][m] = 'W';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n - i >= 0 && m + i <= 8; i++) // 右上
            {
                if (s[n - i][m + i] == '.')
                    break;
                if (s[n - i][m + i] == 'B')
                    continue;
                if (s[n - i][m + i] == 'W')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n - j][m + j] = 'W';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n + i <= 8 && m - i >= 0; i++) // 左下
            {
                if (s[n + i][m - i] == '.')
                    break;
                if (s[n + i][m - i] == 'B')
                    continue;
                if (s[n + i][m - i] == 'W')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n + j][m - j] = 'W';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n - i >= 0 && m - i >= 0; i++) // 左上
            {
                if (s[n - i][m - i] == '.')
                    break;
                if (s[n - i][m - i] == 'B')
                    continue;
                if (s[n - i][m - i] == 'W')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n - j][m - j] = 'W';
                        flag = 1;
                    }
                    break;
                }
            }
            for (int i = 1; n + i <= 8 && m + i <= 8; i++) // 右下
            {
                if (s[n + i][m + i] == '.')
                    break;
                if (s[n + i][m + i] == 'B')
                    continue;
                if (s[n + i][m + i] == 'W')
                {
                    for (int j = 1; j <= i - 1; j++)
                    {
                        s[n + j][m + j] = 'W';
                        flag = 1;
                    }
                    break;
                }
            }
        }

        if (!flag)
            cout << "invalid" << endl;
        else
        {
            for (int i = 1; i <= 8; i++)
            {
                for (int j = 1; j <= 8; j++)
                    printf("%c", s[i][j]);
                cout << endl;
            }
            int w = 0, b = 0;
            for (int i = 1; i <= 8; i++)
            {
                for (int j = 1; j <= 8; j++)
                {
                    if (s[i][j] == 'B')
                        b++;
                    else if (s[i][j] == 'W')
                        w++;
                }
            }
            cout << b << ":" << w << endl;
        }
    }
    return 0;
}