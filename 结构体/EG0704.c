// Program: EG0704.C
// Description: 简易学生成绩管理
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5
struct student
{
	char number[10];
	char name[16];
	float score1;
	float score2;
	float score3;
};
int input(struct student stu[]);
void find(struct student stu[], int n);
void menu(void);

void menu(void)
{
	printf("\n---欢迎使用学生成绩管理系统---\n");
	printf(" 1.成绩录入 \n");
	printf(" 2.成绩查询 \n");
	printf(" 6.退出系统 \n");
	printf("\n------------------------------\n");
	printf("请输入您的选择： ");
}
int input(struct student stu[])
{
	int i, n;

	printf("请输入要录入的学生人数 n： ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("请输入第%d 个学生的学号 姓名 成绩 A 成绩 B 成绩 C\n", i+1);
		scanf("%s", stu[i].number);
		scanf("%s", stu[i].name );
		scanf("%f", &stu[i].score1);
		scanf("%f", &stu[i].score2);
		scanf("%f", &stu[i].score3);
	}

	return n;
}
void find(struct student stu[], int n)
{
	int i;
	char str[16];
	printf("请输入姓名或学号查询:");
	scanf("%s", str);
	for(i=0; i<n; i++)
	{
		if(!strcmp(str, stu[i].number)||!strcmp(str, stu[i].name))
		{
			printf("查询到学号%s 的%s 同学:", stu[i].number, stu[i].name);
			printf("成绩 A:%3.0f B:%3.0f C:%3.0f\n\n",
					stu[i].score1, stu[i].score2, stu[i].score3);
			return;
		}
	}
	printf("亲，没有这个人！ \n");
}
void main()
{
	struct student stu[N];
	int n;
	int choice;
	while(1)
	{
		menu();
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				n=input(stu);
				break;
			case 2:
				find(stu, n);
				break;
			case 6:
				exit(0);
		}
	}
}