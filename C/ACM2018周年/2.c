# include <stdio.h>
double A(int n)           //如果是void A(int n)   则无return返回值   如果想有返回值必须定义出变量形
{
    int i;
    double A = 1;
    for (i = n; i > 0; i--)
    {
        A *= i;
    }
    return A;
}

int main()
{
    int n,i,t1,t2;
    double num;
    while(~scanf("%d",&n))
    {
        int t=26-n;
        if(n>=1&&n<3)
        {
            printf("%d\n",0);
        }
        
        t1=n/3;
        t2=n%3;


    }
    return 0;
}
