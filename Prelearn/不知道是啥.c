#include <stdio.h>
int main()
{
    int type;
    
    scanf("%d", &type);
    switch ( type ) {
    	case 1: printf("����ɷ�ʡ�\n"); break;
    	case 2: printf("����daɷ�ʡ�\n");
    	case 3: printf("�����ɵ�ơ�\n"); break;
    	default: printf("�ټ���shabi.\n");
    }
    return 0;
}

