// Program: EG06-15.c 
// Description: 用指针函数将指定的十进制数转换为十六进制
#include <stdio.h>
#include <string.h>
void reverser( char *Begin, char *End )
{
    char tmp;
    if(Begin < End)
	{
        tmp=* Begin;
		* Begin =* End;
		* End =tmp;
		reverser(++Begin,-- End);
	}
}
void reverse( char *Str )
{
    reverser(Str, Str +strlen(Str)-1 );
}
char *itoh(unsigned int Num)
{
    int Hex,i=0;
    static char HexNum[10];
	do
    {
        Hex=Num%16;
        HexNum[i++]=(Hex<=9)?Hex+'0':Hex-10+'a';
    }while(Num/=16);
    reverse(HexNum);
    return HexNum;
}
void main( void )
{
    printf("Hex(%d)=%s\n", 18, itoh(18));
}