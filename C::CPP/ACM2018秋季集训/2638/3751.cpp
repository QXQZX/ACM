#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j, t, temp;
    while (cin >> m >> n)
    {
        temp = 1;
        for (t = 1; t <= n; t++)
        {
            for (i = temp; i < n; i++)
                cout << ' ';
            temp++;
            if (t == 1 || t == n)
            {
                for (j = 1; j <= m; j++)
                {
                    if (j == 1)
                        cout << '*';
                    else
                        cout << ' ' << '*';
                }
                cout << endl;
            }
            else
            {
                for (j = 1; j <= m; j++)
                {
                    if (j == 1)
                        cout << '*';
                    else if (j == m) //注意
                        cout << ' ' << '*';
                    else
                        cout << ' ' << ' '; //不能直接输出两个空格  因为此处输出的是字符型空格
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}