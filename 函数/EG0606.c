// Program: EG0606.c
// Description:  bubble sort using function
#include <stdio.h>
void Input( int data[10], int size)
{
    int i;
    printf("Input %d int: ", size);
    for( i=0; i<size; i++ )
        scanf("%d", data+i);
}
void Sort( int data[], int size)
{
    int i, j, tmp;

    for( i=0; i<size-1; i++ )
        for( j=0; j<size-i-1; j++ )
            if( data[j]>data[j+1] )
                tmp=data[j], data[j]=data[j+1], data[j+1]=tmp;
}
void Print( int *data, int size)
{
    int  i;
    printf("The sorted number is : ");
    for( i=0; i<size; i++ )
        printf(" %d", data[i] );
    printf("\n");
}
void main( void )
{
    int Num[10], SIZE=10;

    Input(Num,SIZE);
    Sort(Num,SIZE);
    Print(Num,SIZE);
}	