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
    int i;
    for (i=0; i<N; i++)							/* ����N��ְ������Ϣ */
    {
        scanf("%ld", &s[i].num);            	/* ������ */
        scanf("%s", s[i].name);               	/* �������� */
        scanf("%f", &s[i].jbgz);            	/* ����������� */
        scanf("%f", &s[i].zwgz);            	/* ����ְ���� */
        scanf("%f", &s[i].gwgz);            	/* �����λ���� */
        s[i].total=s[i].jbgz+s[i].zwgz+s[i].gwgz; /* �����ܹ��� */
    }
    if((fp=fopen("file6.dat", "wb"))==NULL) 		/* ��ֻд�������ļ� */
    {
        printf("File can not open!\n");
        exit(0);
    }
    // �����������s�е�N��ְ����Ϣд��fpָ����ļ���
    fwrite(s, sizeof(struct zggz), N, fp);
    fclose(fp);	/* �ر�fp��ָ����ļ� */
}
