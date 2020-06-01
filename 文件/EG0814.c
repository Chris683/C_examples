#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp; /* 定义文件型指针变量 */
	int i;
	if((fp=fopen("file3.txt", "w+"))==NULL) /* 打开文本文件用于写读 */
	{
		printf("File can not open!\n");
		exit(0);
	}
	for(i=0; i<100; i++) /* 100 次循环 */
		fputc(fgetc(stdin), fp); /* 从键盘读取字符写入文件 */
	rewind(fp); /* 让内部指针重新指向文件头 */
	for(i=0; i<10; i++) /* 10 次循环 */
		fputc(fgetc(fp), stdout); /* 从文件中读取 1 个字符输出到显示器 */
	fclose(fp);
}