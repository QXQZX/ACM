#include <cstdio>
#include <iostream>  //cin  cout会超时
using namespace std;
int num[3000001];
int search(int left, int right, int t);
int main() {
    int n, key, i, q;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &num[i]);
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &key);
        printf("%d\n", search(0, n - 1, key));
    }
    return 0;
}
int search(int left, int right, int t) {
    if (left > right)
        return -1;
    else {
        int temp = (left + right) / 2;

        if (t == num[temp])
            return temp + 1;  //注意从0开始得
        else if (num[temp] > t)
            return search(left, temp - 1, t);
        else if (num[temp] < t)
            return search(temp + 1, right, t);
    }
}
/*#include <iostream>
#include <cstdio>
using namespace std;
int num[3000001];
int search(int left, int right, int t);
int main()
{
    int n, key, i, q;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    scanf("%d", &q);
    while (q--)
    {
        scanf("%d", &key);
        printf("%d\n", search(0, n - 1, key));
    }
    return 0;
}
int search(int left, int right, int t)
{
    while (left <= right)
    {
        int temp = (left + right) / 2;
        if (t == num[temp])
            return temp + 1; //注意从0开始得
        else if (num[temp] > t)
            right = temp - 1;
        else if (num[temp] < t)
            left = temp + 1;
    }
    return -1;
}
*/