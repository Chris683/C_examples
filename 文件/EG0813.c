#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	char ch, ch0, str[6][81], str5[81];
	short s[2], s1, s0, i;
	long l[3], l2, l0;
	float f[4], f3, f0;
	double d[5], d4, d0;
	if((fp=fopen("file7.txt", "w"))==NULL) /* ��ֻд�ı��ļ� */
	{
		printf("File can not open!\n");
		exit(0);
	}
	scanf("%c", &ch); /* �Ӽ��̶�ȡ 1 ���ַ� */
	scanf("%d,%d", &s[0], &s[1]); /* �Ӽ��̶�ȡ 2 �������� */
	scanf("%ld,%ld,%ld", l+0, l+1, l+2); /* �Ӽ��̶�ȡ 3 �������� */
	for(i=0; i<4; i++) /* �Ӽ��̶�ȡ 4 ��������ʵ�� */
		scanf("%f", f+i);
	for(i=0; i<5; i++) /* �Ӽ��̶�ȡ 5 ��˫����ʵ�� */
		scanf("%lf", d+i);
	for(i=0; i<6; i++) /* �Ӽ��̶�ȡ 6 ���ַ��� */
		scanf("%s", str[i]);
	/* �� 1 ���ַ��� 2 ���������� 3 ������������ָ����ʽд�� fp ָ����ļ� */
	fprintf(fp, "%c%d,%d,%ld,%ld,%ld,", ch, s[0], s[1], l[0], l[1], l[2]);
	/* �� 4 ��������ʵ���� 5 ��˫����ʵ����ָ����ʽд�� fp ָ����ļ� */
	fprintf(fp, "%f,%f,%f,%f,%f,%f,%f,%f,%f,",
		f[0], f[1], f[2], f[3], d[0], d[1], d[2], d[3], d[4]);
	/* �� 6 ���ַ�����ָ����ʽд�� fp ָ����ļ� */
	fprintf(fp, "%s\n%s\n%s\n%s\n%s\n%s\n",
		str[0], str[1], str[2], str[3], str[4], str[5]);
	fclose(fp); /* �ر� fp ��ָ����ļ� */
	if((fp=fopen("file7.txt", "r"))==NULL) /* ��ֻ���ı��ļ� */
	{
		printf("File can not open!\n");
		exit(0);
	}
	fscanf(fp,"%c", &ch0); /* ���ļ��ж�ȡ 1 ���ַ� */
	fscanf(fp,"%d,", &s1); /* ���ļ��ж�ȡ�� 1 �������� */
	fscanf(fp,"%d,", &s0); /* ������ 2 �������� */
	fscanf(fp,"%ld,", &l0); /* ������ 1 �������� */
	fscanf(fp,"%ld,", &l2); /* ���ļ��ж�ȡ�� 2 �������� */
	fscanf(fp,"%ld,", &l0); /* ������ 3 �������� */
	fscanf(fp,"%f,%f,", &f0, &f0); /* ������ 1�� 2 ��������ʵ�� */
	fscanf(fp,"%f,", &f3); /* ���ļ��ж�ȡ�� 3 ��������ʵ�� */
	fscanf(fp,"%f,", &f0); /* ������ 4 ��������ʵ�� */
	fscanf(fp,"%lf,%lf,%lf,", &d0, &d0, &d0);/* ������ 1�� 2�� 3 ��˫����ʵ�� */
	fscanf(fp,"%lf,", &d4); /* ���ļ��ж�ȡ�� 4 ��˫����ʵ�� */
	fscanf(fp,"%lf,", &d0); /* ������ 5 ��˫����ʵ�� */
	for(i=0; i<5; i++)
		fscanf(fp, "%s\n", str5); /* ���ļ��ж�ȡ�� 5 ���ַ��� */
	printf("%c\n%d\n%ld\n%f\n%f\n%s\n", ch0, s1, l2, f3, d4, str5);
	/* ������ļ��ж�ȡ������ */
	fclose(fp); /* �ر� fp ��ָ����ļ� */
}