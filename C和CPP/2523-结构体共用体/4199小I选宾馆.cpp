#include <iostream>
using namespace std;
struct node
{
    int p;
    int b;
    int id;
} a[5555];
int n;

int main()
{
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a[i].p, &a[i].b);
            a[i].id = i + 1;
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j + 1].p > a[j].p)
                {
                    node temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
                else if (a[j + 1].p == a[j].p)
                {
                    if (a[j + 1].b > a[j].b)
                    {
                        node temp = a[j + 1];
                        a[j + 1] = a[j];
                        a[j] = temp;
                    }
                }
            }
        }
        printf("%d\n",a[0].id);
    }
    return 0;
}
