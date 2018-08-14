#include <stdio.h>
int main()
{
    int math = 87, eng = 72, comp = 93;
    int a = (math + eng + comp) / 3;
    printf("math = %d, eng = %d, comp = %d, average = %d\n", math, eng, comp, a);
    return 0;
}