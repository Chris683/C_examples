// Program: EG0701.C 
// Description: �ṹ�����Ӧ��ʾ������ʼ��stu1,��ֵ��stu2��ӡ���
#include <stdio.h>
void main( void )
{
    int i;
	struct date
    {
        unsigned short year;	//��
        unsigned char  month;	//��
        unsigned char  day;		//��
    }; 
    struct student
    {
        int no; 				//ѧ��
        char name[16]; 			//����
        char sex; 				//�Ա�
        struct date birthday; 	//��������
        float score[7];			//����
    } stu2; 
    struct student stu1={11301, "Merry", 'F', 2008, 5, 1,
                         98, 87, 95, 65, 77, 83, 92 };

    stu2=stu1;
    printf("ѧ�� ���� �Ա� �������� �ɼ�1 �ɼ�2 �ɼ�3 �ɼ�4 �ɼ�5 �ɼ�6 �ɼ�7\n");
    printf("%d %s %s %d-%d-%d", stu2.no, stu2.name, stu2.sex=='F'?"Ů":"��",
           stu2.birthday.year, stu2.birthday.month, stu2.birthday.day);
	for (i=0; i<7; i++)
	{
		printf("%6.1f", stu2.score[i]);
	}
	puts("\n");
}
