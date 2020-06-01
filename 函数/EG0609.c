// Program: EG0609.c
// Description: bubble sort
#include <stdio.h>
#define SIZE 11
int Num[SIZE]={ 0, 2, 9, 6, 8, 7, 4, 5, 3, 1, 0 };
void sort( void )
{
    int i, j, tmp;
    for( i=1; i<SIZE; i++ )
        for( j=1; j<SIZE-i; j++ )
            if(Num[j]>Num[j+1])
                tmp=Num[j], Num[j]=Num[j+1], Num[j+1]=tmp;
}
void main( void )
{
    int i;
    printf("Normal numbers: ");
    for( i=1; i<SIZE; i++ )
        printf(" %d ", Num[i] );
    printf("\n");
    sort();
    printf("Sorted numbers: ");
    for( i=1; i<SIZE; i++ )
        printf(" %d ", Num[i] );
    printf("\n");
}
