#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp;
	int x, x12, x20, n;
	if((fp=fopen("file8.dat", "rb"))==NULL) /* ��ֻ���������ļ� */
	{
		printf("File can not open!\n");
		exit(0);
	}
	for(n=0; n<3; n++) /* ѭ����ȡ�� 1�� 3�� 5 ������ */
	{
		fread(&x, sizeof(int), 1, fp); /* �ӵ�ǰλ�ö�ȡ 1 ������ */
		printf("%f ", x); /* �����ȡ�� 1 ������ */
		fseek(fp, (long)sizeof(int), SEEK_CUR); /* ��λ����һ�������� */
	}
	fseek(fp, (long)sizeof(int)*11, 0); /* ��λ�ڵ� 12 �������� */
	fread(&x12, sizeof(int), 1, fp); /* �ӵ�ǰλ�ö�ȡ 1 ������ */
	printf("%d ", x12); /* �����ȡ�ĵ� 12 ������ */
	fseek(fp, -1*(long)sizeof(int), SEEK_END); /* ��λ�ڵ� 20 �������� */
	fread(&x20, sizeof(int), 1, fp); /* �ӵ�ǰλ�ö�ȡ 1 ������ */
	printf("%d\n", x20); /* �����ȡ�ĵ� 20 ������ */
	fclose(fp); /* �ر� fp ��ָ����ļ� */
}