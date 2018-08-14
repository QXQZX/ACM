#include <stdio.h>
int main()
{
    int type;
    
    scanf("%d", &type);
    switch ( type ) {
    	case 1: printf("你是煞笔。\n"); break;
    	case 2: printf("你是da煞笔。\n");
    	case 3: printf("你就是傻逼。\n"); break;
    	default: printf("再见，shabi.\n");
    }
    return 0;
}

