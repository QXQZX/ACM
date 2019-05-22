#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[505];
    int cnt[505];
    int p[1000];
    while (~scanf("%s", s))
    {
        memset(cnt, 0, sizeof(cnt));
        int len = strlen(s);
        int sum1 = len * 8;
        int sum2 = 0;
        for (int i = 0; i < len; i++)
            cnt[s[i]]++;

        int top = 0, down = 0;
        for (int i = 0; i < 505; i++)
        {
            if (cnt[i] != 0)
                p[top++] = cnt[i];
        }
        sort(p, p + top);
        while (top != down)
        {
            int a = p[down++];
            if (top != down)
            {
                int b = p[down++];
                sum2 += (a + b);
                p[top++] = a + b;
                sort(p + down, p + top);
            }
        }
        printf("%d %d %.1lf\n", sum1, sum2, sum1 * 1.0 / sum2);
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

//void qsort(int a[], int left, int right);


int main()
{
    char s[1001];
    int cnt[505];
    int q[1111];
    while (~scanf("%s", s))
    {
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < strlen(s); i++)
            cnt[s[i]]++;
        //栈的操作
        int top = 0, rear = 0;
        for (int i = 0; i < 505; i++)
        {
            if (cnt[i] != 0)
                q[top++] = cnt[i];
        }
        int sum1 = strlen(s) * 8, sum2 = 0;
        sort(q, q+top);
        while (top != rear)
        {
            int x1 = q[rear++];
            if (top != rear)
            {
                int x2 = q[rear++];
                sum2 += (x1 + x2);
                q[top++] = x1 + x2;
                sort(q+rear, q+top);
            }
        }
        printf("%d %d %.1lf\n", sum1, sum2, 1.0 * sum1 / sum2);
    }
    return 0;
}
/*
void qsort(int a[], int left, int right)
{
    int temp = a[left];
    int i = left, j = right;
    if (left >= right)
        return;
    while (i < j)
    {
        while (i < j && a[j] >= temp)
            j--;
        a[i] = a[j];
        while (i < j && a[i] <= temp)
            i++;
        a[j] = a[i];
    }
    a[i] = temp;
    qsort(a, left, i - 1);
    qsort(a, i + 1, right);
}*/