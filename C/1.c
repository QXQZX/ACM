#include <stdio.h>
#include <string.h>
#include <stdlib.h>
union node
{
    int a;
    double b;
    char s[30];
}q[112345];
char book[112345][30];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i;
    for(i = 0;i < n;i++){
        scanf("%s", book[i]);
        if(strcmp(book[i],"INT") == 0){
            scanf("%d", &q[i].a);
        }else if(strcmp(book[i], "DOUBLE") == 0){
            scanf("%lf", &q[i].b);
        }else if(strcmp(book[i],"STRING") == 0){
            scanf("%s", q[i].s);
        }
    }
    int k;
    for(i = 0;i < m;i++){
        scanf("%d", &k);
        if(strcmp(book[k],"INT")  == 0){
            printf("%d\n", q[k].a);
        }else if(strcmp(book[k], "DOUBLE") == 0){
            printf("%.2f\n", q[k].b);
        }else if(strcmp(book[k],"STRING") == 0){
            printf("%s\n", q[k].s);
        }
    }


    return 0;
}

