#include <stdio.h>
int main()
{
    int n, i, m;
    int num[10];
    int temp;

    while (~scanf("%d", &n) && n)
    {
        int a[10] = {0};
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
            temp = num[i];
            while (temp!=0)
            {
                a[i] += temp % 10;
                temp = temp / 10;
            }
        }

        for (i = 0; i < n - 1; i++)
        {
            for (m = i + 1; m < n; m++)
            {
                if (a[i] > a[m])
                {
                    int t=a[i];        //必须吧数组a[i]和a[m]也交换了   否则影响下一次循环
                    a[i]=a[m];
                    a[m]=t;
                    t = num[i];
                    num[i] = num[m];
                    num[m] = t;
                }
            }
        }

        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                printf("%d", num[i]);
            }
            else
            {
                printf(" %d", num[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
