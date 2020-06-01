#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	char ch, ch0, str[6][81], str5[81];
	short s[2], s1, s0, i;
	long l[3], l2, l0;
	float f[4], f3, f0;
	double d[5], d4, d0;
	if((fp=fopen("file7.txt", "w"))==NULL) /* 打开只写文本文件 */
	{
		printf("File can not open!\n");
		exit(0);
	}
	scanf("%c", &ch); /* 从键盘读取 1 个字符 */
	scanf("%d,%d", &s[0], &s[1]); /* 从键盘读取 2 个短整数 */
	scanf("%ld,%ld,%ld", l+0, l+1, l+2); /* 从键盘读取 3 个长整数 */
	for(i=0; i<4; i++) /* 从键盘读取 4 个单精度实数 */
		scanf("%f", f+i);
	for(i=0; i<5; i++) /* 从键盘读取 5 个双精度实数 */
		scanf("%lf", d+i);
	for(i=0; i<6; i++) /* 从键盘读取 6 个字符串 */
		scanf("%s", str[i]);
	/* 将 1 个字符、 2 个短整数、 3 个长整型数按指定格式写入 fp 指向的文件 */
	fprintf(fp, "%c%d,%d,%ld,%ld,%ld,", ch, s[0], s[1], l[0], l[1], l[2]);
	/* 将 4 个单精度实数、 5 个双精度实数按指定格式写入 fp 指向的文件 */
	fprintf(fp, "%f,%f,%f,%f,%f,%f,%f,%f,%f,",
		f[0], f[1], f[2], f[3], d[0], d[1], d[2], d[3], d[4]);
	/* 将 6 个字符串按指定格式写入 fp 指向的文件 */
	fprintf(fp, "%s\n%s\n%s\n%s\n%s\n%s\n",
		str[0], str[1], str[2], str[3], str[4], str[5]);
	fclose(fp); /* 关闭 fp 所指向的文件 */
	if((fp=fopen("file7.txt", "r"))==NULL) /* 打开只读文本文件 */
	{
		printf("File can not open!\n");
		exit(0);
	}
	fscanf(fp,"%c", &ch0); /* 从文件中读取 1 个字符 */
	fscanf(fp,"%d,", &s1); /* 从文件中读取第 1 个短整数 */
	fscanf(fp,"%d,", &s0); /* 跳过第 2 个短整数 */
	fscanf(fp,"%ld,", &l0); /* 跳过第 1 个长整数 */
	fscanf(fp,"%ld,", &l2); /* 从文件中读取第 2 个长整数 */
	fscanf(fp,"%ld,", &l0); /* 跳过第 3 个长整数 */
	fscanf(fp,"%f,%f,", &f0, &f0); /* 跳过第 1、 2 个单精度实数 */
	fscanf(fp,"%f,", &f3); /* 从文件中读取第 3 个单精度实数 */
	fscanf(fp,"%f,", &f0); /* 跳过第 4 个单精度实数 */
	fscanf(fp,"%lf,%lf,%lf,", &d0, &d0, &d0);/* 跳过第 1、 2、 3 个双精度实数 */
	fscanf(fp,"%lf,", &d4); /* 从文件中读取第 4 个双精度实数 */
	fscanf(fp,"%lf,", &d0); /* 跳过第 5 个双精度实数 */
	for(i=0; i<5; i++)
		fscanf(fp, "%s\n", str5); /* 从文件中读取第 5 个字符串 */
	printf("%c\n%d\n%ld\n%f\n%f\n%s\n", ch0, s1, l2, f3, d4, str5);
	/* 输出从文件中读取的数据 */
	fclose(fp); /* 关闭 fp 所指向的文件 */
}