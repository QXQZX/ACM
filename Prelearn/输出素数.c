#include <stdio.h>
int main()
{
    /* for循环的输出素数*/
    int x;
    //scanf("%d",&x);
    int count = 0;
    for (x = 1; count < 50; x++)
    {
        int i;
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            count++;
            printf("%d\t", x);      //   /t输出等距
            if (count % 5 == 0)     // 每5个换一行
            {
                printf("\n");
            }
        }
    }

    return 0;
}

/*while循环*/
/*#include <stdio.h>
int main()
{
    // while循环的输出素数
    int x = 1;
    //scanf("%d",&x);
    int count = 0;
    while (count < 50)
    {
        int i;
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            count++;
            printf("%d\t", x);
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
        x++;
    }

    return 0;
}*/