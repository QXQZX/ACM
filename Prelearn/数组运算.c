/**
找出key 在数组a当中的位置
key   要寻找的数字
a     要寻找的数组
length   数组a的长度
return    如果找到，返回其在a中的位置；如果找不到则返回-1
*/
//int search(int key, int a[], int length)
#include <stdio.h>
int main()
{
    int a[] = {2, 4, 6, 7};
    int x;
    int loc;
    printf("请输入一个数字");
    scanf("%d", &x);
    loc = search(x, a, sizeof(a) / sizeof(a[0]));
    if (loc != 0)
    {
        printf("%d在第%d个位置上\n", x, loc);
    }
    else
    {
        printf("不存在");
    }

    return 0;
}
