#include <stdio.h>
#include <stdlib.h>
void main( void )
{
    FILE *fp1;									/* �����ļ���ָ����� */
    int i;
    char ch;
    if((fp1=fopen("file3.txt", "r"))==NULL)		/* ���ı��ļ����ڶ� */
    {
        printf("File can not open!\n");
        exit(0);
    }
    for(i=0; i<10; i++)							/* 10��ѭ�� */
    {
        ch=fgetc(fp1);        					/* ���ļ��ж�ȡ1���ַ��������ch */
        putchar(ch);          					/* ������ch���ַ��������ʾ�� */
    }
  fclose(fp1);
}
