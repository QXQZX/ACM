#include <stdio.h>
int main()
{
    int i, m, t, n, money;
    int mz[100];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &mz[i]);
        }
        scanf("%d", &money);
        for (i = 0; i < n - 1; i++)
        {
            for (m = i + 1; m < n; m++)
            {
                if (mz[i] > mz[m])
                {
                    int temp = mz[i];
                    mz[i] = mz[m];
                    mz[m] = temp;
                }
            }
        }
        int a = n - 1;
        int cnt = 0;
        while (money)
        {
            if (money % mz[a] == 0)
            {
                cnt += money / mz[a];
                money = 0;
                break;
            }
            else if (money / mz[a] > 0)
            {
                cnt += money / mz[a];
                money %= mz[a];
                a--;
            }
            else if (money / mz[a] <= 0)
            {
                a--;
            }

            if (a < 0)
            {
                break;
            }
        }
        if (money == 0)
            printf("%d\n", cnt);
        else
            printf("%d\n", -1);
    }
    return 0;
}
