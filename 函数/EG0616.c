// Program: EG06016.C
// Description: 调用qsort()对一组整型数从小到大排序
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
int comp( void *, void *);
void main( void )
{
    int i;
    int Num[SIZE] = {5, 6, 8, 2, 9, 1, 3, 0};
    qsort(Num, SIZE, sizeof(int), comp);
    for (i = 0; i < SIZE; i ++)
        printf("%3d,", Num[i]);
    printf("\b \n");
}
int comp( void *p,  void *q)
{
    return (*(int *)p - *(int *)q);
}
