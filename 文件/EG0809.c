#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	FILE *fp;
	int i;
	char s[11];
	if((fp=fopen("file4.txt", "w"))==NULL) /* 打开只写的文本文件 */
	{
		printf("File can not open!\n");
		exit(0);
	}
	for(i=0; i<6; i++) /* 循环处理 6 个字符串 */
	{
		gets(s); /* 从键盘读取 1 个长度为 10 的字符串，存入 s 中 */
		fputs(s,fp); /* 将 s 中的字符串写到 fp 指向的文件 */
	}
	fclose(fp); /* 关闭 fp 所指向的文件 */
	if ((fp=fopen("file4.txt", "r"))==NULL) /* 打开只读的文本文件 */
	{
		printf("File can not open!\n");
		exit(0);
	}
	for(i=0; i<3; i++) /* 利用次数型循环控制读取第 3 个字符串 */
		fgets(s, 11, fp); /*读取 10 个字符组成字符串存入数组 s */
	puts(s); /* 将 s 中存放的字符串输出到显示器上 */
	fclose(fp); /* 关闭 fp 所指向的文件 */
}