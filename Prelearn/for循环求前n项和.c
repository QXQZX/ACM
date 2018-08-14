#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;

    scanf("%d", &n);
    for (i = 1; i <= 3; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}

/*   for循环 运行顺序   

初始化i        -->       判断i<=3             -->         进入块{   sum += 1  }   
-->           i++               ==》下一个循环 判断i <=3
*/


