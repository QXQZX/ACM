#include <stdio.h>
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0;
    printf("数据:\n\n");
    printf("十进制表示的数据：\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n指针形式十六进制表示的数据：\n");
    for (i = 0; i < 5; i++)
    {
        printf("%p\t", arr[i]);
    }
    printf("\n\n普通十六进制表示的数据：\n");
    for (i = 0; i < 5; i++)
    {
        printf("%x\t", arr[i]);
    }
    printf("\n\n\n地址:\n");
    printf("\n\n十进制表示的地址：\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", &arr[i]);
    }
    printf("\n\n指针形式十六进制表示的地址：\n");
    for (i = 0; i < 5; i++)
    {
        printf("%p\t", &arr[i]);
    }
    printf("\n\n普通十六进制表示的地址：\n");
    for (i = 0; i < 5; i++)
    {
        printf("%x\t", &arr[i]);
    }
    printf("\n");
}