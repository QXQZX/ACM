#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        char str[110][110], str_temp[110];
        int len_max = 0;
        int flag = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            scanf("%s", str[i]);
            //    getchar();
            int len = strlen(str[i]);
            if (len > len_max)
            {
                len_max = len;
                strcpy(str_temp, str[i]);
            }
        }
        for (i = 0; i < n; i++)
        {
            if (strstr(str_temp, str[i]) == NULL)
                flag = 1;
        }
        if (flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
