#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	FILE *fp;
	int i;
	char s[11];
	if((fp=fopen("file4.txt", "w"))==NULL) /* ��ֻд���ı��ļ� */
	{
		printf("File can not open!\n");
		exit(0);
	}
	for(i=0; i<6; i++) /* ѭ������ 6 ���ַ��� */
	{
		gets(s); /* �Ӽ��̶�ȡ 1 ������Ϊ 10 ���ַ��������� s �� */
		fputs(s,fp); /* �� s �е��ַ���д�� fp ָ����ļ� */
	}
	fclose(fp); /* �ر� fp ��ָ����ļ� */
	if ((fp=fopen("file4.txt", "r"))==NULL) /* ��ֻ�����ı��ļ� */
	{
		printf("File can not open!\n");
		exit(0);
	}
	for(i=0; i<3; i++) /* ���ô�����ѭ�����ƶ�ȡ�� 3 ���ַ��� */
		fgets(s, 11, fp); /*��ȡ 10 ���ַ�����ַ����������� s */
	puts(s); /* �� s �д�ŵ��ַ����������ʾ���� */
	fclose(fp); /* �ر� fp ��ָ����ļ� */
}