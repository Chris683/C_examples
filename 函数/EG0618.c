/// Program: EG0618.C                       
// Description: �ⲿ������ֲ�����ͬ�����ԡ� 
#include <stdio.h>
int a=12, b=6;      //�����ⲿ����a,b
int max(int a, int b)  //a,bΪ�ⲿ����
{
	return  a>b?a:b; 
}
void main( void )
{
	int a=30;
	printf("%d\n", max(a, b));
}
