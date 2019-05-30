#include <stdio.h>
#include <string.h>
int main()
{
    char s[22];
    enum  // 定义枚举类型
    {
        red,
        orange,
        yellow,
        green,
        blue,
        violet
    };

    while (~scanf("%s", s))
    {
        if (strcmp(s, "red") == 0)
            printf("Rose are red.\n");
        else if (strcmp(s, "orange") == 0)
            printf("Poppies are orange.\n");
        else if (strcmp(s, "yellow") == 0)
            printf("Sunflower are yellow.\n");
        else if (strcmp(s, "green") == 0)
            printf("Grass are green.\n");
        else if (strcmp(s, "blue") == 0)
            printf("Bluebells are blue.\n");
        else if (strcmp(s, "violet") == 0)
            printf("Violets are violet.\n");
        else
            printf("I don't know about the color %s.\n", s);
    }

    return 0;
}