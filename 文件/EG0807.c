#include <stdio.h>
#include <stdlib.h>
void main( void )
{
    FILE *fp1;									/* 定义文件型指针变量 */
    int i;
    char ch;
    if((fp1=fopen("file3.txt", "r"))==NULL)		/* 打开文本文件用于读 */
    {
        printf("File can not open!\n");
        exit(0);
    }
    for(i=0; i<10; i++)							/* 10次循环 */
    {
        ch=fgetc(fp1);        					/* 从文件中读取1个字符存入变量ch */
        putchar(ch);          					/* 将变量ch中字符输出到显示器 */
    }
  fclose(fp1);
}
