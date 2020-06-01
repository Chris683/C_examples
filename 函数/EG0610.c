// Program: EG0610.c
// Description: 输入2个字符串，将二者连接后输出结果。
#include <stdio.h>
int strlen( char str[] )
{
    int i=-1;
    while( str[++i] );
    return i;
}
char *StrCat( char *ptr1, char *ptr2 )
{
    int len;
    len=strlen(ptr1);
    ptr1+=len;
    len+=strlen(ptr2);
    while(*ptr1=*ptr2)
        ptr1++, ptr2++;
    return ptr1-len;
}
void main( void )
{
    char str1[20], str2[20];
    printf("请输入2个字符串:\n");
    gets(str1);
    gets(str2);
    printf("合并字符串为%s\n", StrCat(str1,str2));
}
