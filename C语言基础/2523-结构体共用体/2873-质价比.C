#include <stdio.h>
typedef struct
{
    int wi;
    int pi;
} st;
int main()
{
    st temp, wipi[100];
    int n, i, j;
    while (~scanf("%d", &n))
    {
        for (i = 0; i < n; i++) //输入质量
        {
            scanf("%d", &wipi[i].wi);
        }
        for (i = 0; i < n; i++) //输入价格
        {
            scanf("%d", &wipi[i].pi);
        }

        for (i = 0; i < n - 1; i++) //冒泡排序
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (wipi[j].wi > wipi[j + 1].wi)
                {
                    temp = wipi[j + 1];
                    wipi[j + 1] = wipi[j];
                    wipi[j] = temp;
                }
                if (wipi[j + 1].wi == wipi[j].wi && wipi[j + 1].pi > wipi[j].pi)
                {
                    int temp = wipi[j + 1].pi;
                    wipi[j + 1].pi = wipi[j].pi;
                    wipi[j].pi = temp;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d %d\n", wipi[i].wi, wipi[i].pi);
        }
    }
    return 0;
}
