#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    int i;
    char s[81];
    if((fp=fopen("file5.txt", "w"))==NULL)     	/* ��ֻд���ı��ļ� */
    {
        printf("File can not open!\n");
        exit(0);
    }
    for(i=0; i<6; i++)     		/* ѭ������6���ַ��� */
    {
        gets(s);       			/* �Ӽ��̶�ȡ1�����ȡ�80���ַ���������s�� */
        fputs(s, fp);    		/* ��s�е��ַ���д��fpָ����ļ� */
        fputc('\n', fp);  		/* ��д1���س����з���fpָ����ļ� */
    }
    fclose(fp);           		/* �ر�fp��ָ����ļ� */
    if((fp=fopen("file5.txt", "r"))==NULL)		/* ��ֻ�����ı��ļ� */
    {
        printf("File can not open!\n");
        exit(0);
    }
    for(i=0;i<3;i++)     		/* ���ô�����ѭ�����ƶ�ȡ��3���ַ��� */
        fgets(s, 81, fp);   	/* ��fpָ���ļ���ȡ80���ַ� */
								/* ���ַ�'\n'���ַ�����ַ�����������s */
    puts(s);              		/* ��s�д�ŵ��ַ����������ʾ���� */
    fclose(fp);           		/* �ر�fp��ָ����ļ� */
}
