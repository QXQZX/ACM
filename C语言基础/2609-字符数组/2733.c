#include <stdio.h>
#include <string.h>
int main()
{
    char xx[10], jj[10];
    gets(xx);
    gets(jj);
    if (strcmp(xx, jj) == 0)   //strcmp函数   srcmp(a,b);
        printf("Equal\n");          //a>b return 正值;
    else                            //a=b return 0;
    {                               //a<b return 负值;
        if (strcmp(xx, "Rock") == 0)
        {
            if (strcmp(jj, "Scissors") == 0)
                printf("Win\n");
            else
                printf("Lose\n");
        }
        else if (strcmp(xx, "Scissors") == 0)
        {
            if (strcmp(jj, "Cloth") == 0)
                printf("Win\n");
            else
                printf("Lose\n");
        }
        else if (strcmp(xx, "Cloth") == 0)
        {
            if (strcmp(jj, "Rock") == 0)
                printf("Win\n");
            else
                printf("Lose\n");
        }
    }
    return 0;
}
