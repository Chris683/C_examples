// Program: EG0704.C
// Description: ����ѧ���ɼ�����
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
	printf("\n---��ӭʹ��ѧ���ɼ�����ϵͳ---\n");
	printf(" 1.�ɼ�¼�� \n");
	printf(" 2.�ɼ���ѯ \n");
	printf(" 6.�˳�ϵͳ \n");
	printf("\n------------------------------\n");
	printf("����������ѡ�� ");
}
int input(struct student stu[])
{
	int i, n;

	printf("������Ҫ¼���ѧ������ n�� ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("�������%d ��ѧ����ѧ�� ���� �ɼ� A �ɼ� B �ɼ� C\n", i+1);
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
	printf("������������ѧ�Ų�ѯ:");
	scanf("%s", str);
	for(i=0; i<n; i++)
	{
		if(!strcmp(str, stu[i].number)||!strcmp(str, stu[i].name))
		{
			printf("��ѯ��ѧ��%s ��%s ͬѧ:", stu[i].number, stu[i].name);
			printf("�ɼ� A:%3.0f B:%3.0f C:%3.0f\n\n",
					stu[i].score1, stu[i].score2, stu[i].score3);
			return;
		}
	}
	printf("�ף�û������ˣ� \n");
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