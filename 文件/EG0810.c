#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    int i;
    char s[81];
    if((fp=fopen("file5.txt", "w"))==NULL)     	/* 打开只写的文本文件 */
    {
        printf("File can not open!\n");
        exit(0);
    }
    for(i=0; i<6; i++)     		/* 循环处理6个字符串 */
    {
        gets(s);       			/* 从键盘读取1个长度≤80的字符串，存入s中 */
        fputs(s, fp);    		/* 将s中的字符串写到fp指向的文件 */
        fputc('\n', fp);  		/* 补写1个回车换行符到fp指向的文件 */
    }
    fclose(fp);           		/* 关闭fp所指向的文件 */
    if((fp=fopen("file5.txt", "r"))==NULL)		/* 打开只读的文本文件 */
    {
        printf("File can not open!\n");
        exit(0);
    }
    for(i=0;i<3;i++)     		/* 利用次数型循环控制读取第3个字符串 */
        fgets(s, 81, fp);   	/* 从fp指向文件读取80个字符 */
								/* 或到字符'\n'的字符组成字符串存入数组s */
    puts(s);              		/* 将s中存放的字符串输出到显示器上 */
    fclose(fp);           		/* 关闭fp所指向的文件 */
}
