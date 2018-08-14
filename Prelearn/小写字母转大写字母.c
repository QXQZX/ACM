#include <stdio.h>
int main()
{
    char a; //定义变量a

    printf("please input a small character \n"); //提示 请输入一个小写字母
    scanf("%c", &a);                             //输入小写字母

    printf("output a big character\n"); //提示输出一个大写字母
    printf("%c", a - 32);          //输出对应的大写字母

    //大小写字母之间在ASCII码表上顺序差32
   //同理小写字母转大写   printf("%c", a + 32);          //输出对应小写字母 
    return 0;
}
