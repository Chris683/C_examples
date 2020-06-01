// Program: EG0612.c
// Description: 递归法计算字符串长度
#include <stdio.h>
int strlen( char *str )
{
    if (*str==NULL)
    {
        return 0;
    }
    else
        return strlen( ++str )+1;
}
void main( void )
{
    char str[20];
    printf("请输入1个字符串:\n");
    gets(str);
    printf("字符串长度为%d\n",  strlen(str));
}

