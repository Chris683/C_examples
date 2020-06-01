// Program: EG0613.c
// Description: 递归法求解Hanoi塔问题
#include <stdio.h>
void move(int num, char one,char two,char three)
{
    if(num==1)
        printf("%c-->%c\n", one, three);
    else
    {
        move( num-1, one, three, two);
        printf("%c-->%c\n", one, three);
        move( num-1, two, one, three);
    }
}
void main( void )
{
    int Num=4;
    printf("Step to moving %d diskes:\n", Num);
    move(Num,'A', 'B', 'C');
}
