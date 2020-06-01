// Program: EG0607.c
// Description:  试写一函数实现两个字符串的比较
#include <stdio.h>
int strcmp(char *str1, char *str2)
{
    while(*str1 && *str2 && *str1==*str2)
        str1++, str2++;
    return *str1-*str2;
}
void main( void )
{
    char str1[80], str2[80];
	int mycmp;
    gets(str1);
    gets(str2);
    mycmp=strcmp(str1, str2);
    printf("strcmp(str1,str2)=%d\n", mycmp);
}
