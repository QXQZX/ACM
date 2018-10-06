# include <stdio.h>
int main()
{
    char str[100][100];
    int i,n;
    scanf("%d",&n);
    getchar();
    for (i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    puts(str[0]);
    return 0;
}

