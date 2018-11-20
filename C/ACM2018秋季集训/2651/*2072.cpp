#include <iostream> //百度解
#include <string>
using namespace std;
int main()
{
    char str[111]; //用字符串存储数字
    int s, i, j;   //删掉的数字个数
    while (~scanf("%s %d", str, &s))
    {
        while (s--)
        {
            for (i = 0; i < strlen(str) - 1; i++)
            {
                if (str[i] > str[i + 1]) //当前一个数字大于后一个数字的时，出现一个递减
                    break;
            }
            //删除前一个数
            for (j = i; j < strlen(str); j++)
                str[j] = str[j + 1]; //从该数开始，后一个数字覆盖前一个
        }
        //跳过前几位的'0'
        for (i = 0; i < strlen(str) - 1 && str[i] == '0'; i++)
            ;
        //从左到右在第一个不为0的数字处结束循环，如果都为0，则保留最后一个0
        //输出结果
        for (; i < strlen(str); i++)
            printf("%c", str[i]);

        printf("\n");
    }
    return 0;
}