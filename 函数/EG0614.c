// Program: EG0614.c 
// Description: 用指针函数求输入整数对应的英文星期名称。
#include <stdio.h>
void main( void )
{
	int week;
	char *WeekName(int);   
	printf("Input Week No(0-6):");
	scanf("%d", &week);
	printf("week No:%2d-->%s\n", week, WeekName(week));
}
char *WeekName(int week)
{
	char *name[]={ "Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday", "Illegal day"};
		
	return((week<0||week>6) ? name[7] : name[week]);
}

 
