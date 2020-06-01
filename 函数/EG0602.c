// Program: EG0602.C                       
// Description: 测试VC的实参求解顺序。。 
#include <stdio.h>
void main( void )
{
	int i=8;
	printf("%d\n%d\n", i+=3, i-=2);
}
