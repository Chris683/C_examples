// Program: EG0620.C                       
// Description: ��ӡ1��10�Ľ׳���ֵ�� 
#include <stdio.h>
int fac(int n)
{
	static int f=1;  
	return f*=n;
} 
void main( void )
{
    int i;
    for(i=1;i<11;i++)
		printf("%d!=%d\n", i, fac(i));
}
