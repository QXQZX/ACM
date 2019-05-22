/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    char s[1005];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        int flag = 1;
        cout<<strlen(s)<<endl;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                flag = 0;
               // break;
            }
        }
        if (flag == 0)
        {
            printf("no\n");
            continue;
        }

        if ((s[0] == '0' && s[1] == '0'))
        {
            printf("no\n");
            continue;
        }
        if (s[n - 2] == '0' && s[n - 1] == '0')
        {
            printf("no\n");
            continue;
        }

        flag = 1;
        for (int i = 1; i < n - 3; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0')
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    char s[1005];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        scanf("%s", s);
        int flag = 1;
        cout<<strlen(s)<<endl;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                flag = 0;
                // break;
            }
        }
        if (flag == 0)
        {
            printf("no\n");
            continue;
        }

        if ((s[0] == '0' && s[1] == '0'))
        {
            printf("no\n");
            continue;
        }
        if (s[n - 2] == '0' && s[n - 1] == '0')
        {
            printf("no\n");
            continue;
        }

        flag = 1;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0')
            {
                flag = 0;
                // break;
            }
        }
        if (flag == 0)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}