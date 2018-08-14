#include <stdio.h>
int main()
{
    const int number = 10;  //数组大小
    int x, i;
    int count[number];  // 定义数组
     // 初始化数组
    for (i = 0; i < number; i++)
    {
        count[i] = 0;
    }
    
    scanf("%d", &x);
    
    while (x != -1)
    {
        if (x >= 0 && x < 9)
        {
            count[x]++;     //数组参与运算
        }
        scanf("%d", &x);
    }
    // 遍历数组输出
    for (i = 0; i < number; i++)
    {
        printf("%d:%d\n", i, count[i]);
    }

    return 0;
}
/*   集成初始化是的定位
int a[10] = {
    [0] = 2, [2] = 3, 6//6将赋值给[3]
}
*用[n]在初始数据中给出定位
*其他位置的值补零
*也可以不给出数组的大小  让编译器自己算
*特别适合初始数据稀疏的数组
*/

/*  数组的大小

*sizeof给出整个数组所占据内容的大小，单位：字节
   数组中元素个数   sizeod(a) / sizeof(a[0])
*sizeof(a[0])给出数组中单个元素的大小，于是相除就得到了数组的单元个数
*/