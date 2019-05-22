#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    int y;
    int step;
} a, l;
int main()
{
    char s[111][111];
    char name[15], go[15];
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= m; j++)
        {
            scanf("%c", &s[i][j]);
            // cin >> s[i][j];
            if (s[i][j] == 'A')
            {
                a.x = i;
                a.y = j;
                a.step = 0;
            }
            if (s[i][j] == 'L')
            {
                l.x = i;
                l.y = j;
                l.step = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= m; j++)
            printf("%c", s[i][j]);
        printf("\n");
    }
    int t;
    scanf("%d", &t);
    int flag = 0;
    while (t--)
    {
        scanf("%s %s", name, go);
        if (name[0] == 'A' && flag == 0)
        {
            if (go[0] == 'u' && a.x - 1 >= 1 && s[a.x - 1][a.y] != '*')
            {
                a.x -= 1;
                a.step++;
            }
            else if (go[0] == 'd' && a.x + 1 <= n && s[a.x + 1][a.y] != '*')
            {
                a.x += 1;
                a.step++;
                // cout << a.x << ' ' << a.y << endl;
            }
            // cout<<"test"<<endl;
            else if (go[0] == 'l' && a.y - 1 >= 1 && s[a.x][a.y - 1] != '*')
            {
                a.y -= 1;
                a.step++;
            }
            else if (go[0] == 'r' && a.y + 1 <= m && s[a.x][a.y + 1] != '*')
            {
                a.y += 1;
                a.step++;
            }

            if (a.x == l.x && a.y == l.y)
            {
                flag = 1;
            }
        }
        else if (name[0] == 'L' && flag == 0)
        {
            if (go[0] == 'u' && l.x - 1 >= 1 && s[l.x - 1][l.y] != '*')
            {
                l.x -= 1;
                l.step++;
            }
            else if (go[0] == 'd' && l.x + 1 <= n && s[l.x + 1][l.y] != '*')
            {
                l.x += 1;
                l.step++;
            }
            else if (go[0] == 'l' && l.y - 1 >= 1 && s[l.x][l.y - 1] != '*')
            {
                l.y -= 1;
                l.step++;
            }
            else if (go[0] == 'r' && l.y + 1 <= m && s[l.x][l.y + 1] != '*')
            {
                l.y += 1;
                l.step++;
            }

            if (a.x == l.x && a.y == l.y)
            {
                flag = 2;
            }
        }
    }
    if (flag == 1)
        printf("Accelerator\n");
    else if (flag == 2)
        printf("MisakaMisaka\n");

    printf("%d\n", a.step + l.step);
    return 0;
}
