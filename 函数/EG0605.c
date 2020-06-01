// Program: EG0605.c
// Description: return length of a string
#include <stdio.h>
int strlen( char str[] )
{
	int i=-1;
	while( str[++i] );
	return i;
}
void main( void )
{
	char *Str="This is a test";
	printf("The length of \"%s\" is %d.\n", Str, strlen(Str));
}
