#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp; /* �����ļ���ָ����� */
	int i;
	if((fp=fopen("file3.txt", "w+"))==NULL) /* ���ı��ļ�����д�� */
	{
		printf("File can not open!\n");
		exit(0);
	}
	for(i=0; i<100; i++) /* 100 ��ѭ�� */
		fputc(fgetc(stdin), fp); /* �Ӽ��̶�ȡ�ַ�д���ļ� */
	rewind(fp); /* ���ڲ�ָ������ָ���ļ�ͷ */
	for(i=0; i<10; i++) /* 10 ��ѭ�� */
		fputc(fgetc(fp), stdout); /* ���ļ��ж�ȡ 1 ���ַ��������ʾ�� */
	fclose(fp);
}