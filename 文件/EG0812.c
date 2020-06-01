#include <stdio.h>
#include <stdlib.h>
#define N 10
struct zggz              						/* 定义职工工资的结构型及数组 */
{
    long num;              						/* 编号 */
    char name[10];         						/* 姓名 */
    float jbgz;           						/* 基本工资 */
    float zwgz;            						/* 职务工资 */
    float gwgz;            						/* 岗位工资 */
    float total;           						/* 总工资 */
} s[N];
void main(void)
{
    FILE *fp;
	long MaxNum;
	float MaxTotal;
	if((fp=fopen("file6.dat", "rb"))==NULL) /* 打开只读文件*/
	{
		printf("File can not open!\n");
		exit(0);
	}
	MaxTotal=-10;
	while(!feof(fp)) /* fp 不是文件尾，则继续查找 */
	{
		// 读取文件中当前 1 个职工信息存入结构体变量 s1
		fread(&s1, sizeof(struct zggz), 1, fp);
		if(MaxTotal<s1.total) /* 判断并记录新的最高工资和其职工编号 */
			MaxTotal=s1.total, MaxNum=s1.num;
	}
	fclose(fp); /* 关闭 fp 所指向的文件 */
	if((fp=fopen("file6.dat", "rb"))==NULL) /* 打开文件用于只读 */
	{
		printf("File can not open!\n");
		exit(0);
	}
	while(!feof(fp)) /* fp 不是文件尾，则继续查找 */
	{
		// 从文件中读取当前的 1 个职工信息存入结构体变量 s1
		fread(&s1, sizeof(struct zggz), 1, fp);
		if(MaxNum==s1.num) /* 查找、输出最高工资职工的编号 */
			printf("max:%ld,%s,%f,%f,%f,%f\n",
				s1.num, s1.name, s1.jbgz, s1.zwgz, s1.gwgz, s1.total);
	}
	fclose(fp); /* 关闭 fp 所指向的文件 */
}
