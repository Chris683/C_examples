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
    int i;
    for (i=0; i<N; i++)							/* 输入N个职工的信息 */
    {
        scanf("%ld", &s[i].num);            	/* 输入编号 */
        scanf("%s", s[i].name);               	/* 输入姓名 */
        scanf("%f", &s[i].jbgz);            	/* 输入基本工资 */
        scanf("%f", &s[i].zwgz);            	/* 输入职务工资 */
        scanf("%f", &s[i].gwgz);            	/* 输入岗位工资 */
        s[i].total=s[i].jbgz+s[i].zwgz+s[i].gwgz; /* 计算总工资 */
    }
    if((fp=fopen("file6.dat", "wb"))==NULL) 		/* 打开只写二进制文件 */
    {
        printf("File can not open!\n");
        exit(0);
    }
    // 将存放在数组s中的N个职工信息写到fp指向的文件中
    fwrite(s, sizeof(struct zggz), N, fp);
    fclose(fp);	/* 关闭fp所指向的文件 */
}
