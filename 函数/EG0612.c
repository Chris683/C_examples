// Program: EG0612.c
// Description: �ݹ鷨�����ַ�������
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
    printf("������1���ַ���:\n");
    gets(str);
    printf("�ַ�������Ϊ%d\n",  strlen(str));
}

