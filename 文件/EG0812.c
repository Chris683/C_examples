#include <stdio.h>
#include <stdlib.h>
#define N 10
struct zggz              						/* ����ְ�����ʵĽṹ�ͼ����� */
{
    long num;              						/* ��� */
    char name[10];         						/* ���� */
    float jbgz;           						/* �������� */
    float zwgz;            						/* ְ���� */
    float gwgz;            						/* ��λ���� */
    float total;           						/* �ܹ��� */
} s[N];
void main(void)
{
    FILE *fp;
	long MaxNum;
	float MaxTotal;
	if((fp=fopen("file6.dat", "rb"))==NULL) /* ��ֻ���ļ�*/
	{
		printf("File can not open!\n");
		exit(0);
	}
	MaxTotal=-10;
	while(!feof(fp)) /* fp �����ļ�β����������� */
	{
		// ��ȡ�ļ��е�ǰ 1 ��ְ����Ϣ����ṹ����� s1
		fread(&s1, sizeof(struct zggz), 1, fp);
		if(MaxTotal<s1.total) /* �жϲ���¼�µ���߹��ʺ���ְ����� */
			MaxTotal=s1.total, MaxNum=s1.num;
	}
	fclose(fp); /* �ر� fp ��ָ����ļ� */
	if((fp=fopen("file6.dat", "rb"))==NULL) /* ���ļ�����ֻ�� */
	{
		printf("File can not open!\n");
		exit(0);
	}
	while(!feof(fp)) /* fp �����ļ�β����������� */
	{
		// ���ļ��ж�ȡ��ǰ�� 1 ��ְ����Ϣ����ṹ����� s1
		fread(&s1, sizeof(struct zggz), 1, fp);
		if(MaxNum==s1.num) /* ���ҡ������߹���ְ���ı�� */
			printf("max:%ld,%s,%f,%f,%f,%f\n",
				s1.num, s1.name, s1.jbgz, s1.zwgz, s1.gwgz, s1.total);
	}
	fclose(fp); /* �ر� fp ��ָ����ļ� */
}
