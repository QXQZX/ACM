#include <iostream>
using namespace std;
struct node
{
    int start;
    int end;
};
int main()
{
    int i, j, n;
    node temp, act[111];
    while (cin >> n)
    {
        for (i = 0; i < n; i++)
        {
            cin >> act[i].start >> act[i].end;
        }
        //以结束时间的大小升序对活动进行排序
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (act[i].end > act[j].end)
                {
                    temp = act[i];
                    act[i] = act[j];
                    act[j] = temp;
                }
            }
        }
        int temp = 0, cnt = 0;
        for (i = 0; i < n; i++)
        {
            if (act[i].start >= temp)
            {
                temp = act[i].end;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
