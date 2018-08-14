#include <stdio.h>
int main()
{
    const int maxnumber = 25;
    int isPrime[maxnumber];   //定义数组大小
    int i, x;

    for (i = 0; i < maxnumber; i++)
    {
        isPrime[i] = 1;        //初始化数组 里面  左右的数为1
    }

    for (x = 2; x < maxnumber; x++)
    {
        if (isPrime[x])           //把某些数的倍数 （不是素数的数）去掉  定义成0
        {
            for (i = 2; i * x < maxnumber; i++)
            {
                isPrime[i * x] = 0;
            }
        }
    }

    for (i = 2; i < maxnumber; i++)        //输出剩余的数  即isPrime是1的数
    {
        if (isPrime[i])
        {
            printf("%d\t", i);  // 等距对其
        }
    }

    printf("\n");
    return 0;
}
