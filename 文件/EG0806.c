#include <stdio.h>
#include <stdlib.h>
void main( void )
{
    FILE *fp1;                                 		/* �����ļ���ָ����� */
    int i;
    char ch;
    if((fp1=fopen("file3.txt", "w"))==NULL)     	/* ���ı��ļ�����д */
    {
        printf("File can not open!\n");
        exit(0);
    }
    for(i=0; i<20; i++)                    			/* ѭ��20�� */
    {
        ch=getchar();    							/* �Ӽ��̶�ȡ�ַ� */
        fputc(ch, fp1);    							/* д���ļ� */
    }
    fclose(fp1);                            		/* �ر��ļ� */
}
