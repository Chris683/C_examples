// Program: EG0601.c               	    
// Description: 判断一个数是否为素数. 
int IsPrime( int Num )
{
    int j, k=Num/2;
    for(j=2; j<=k; j++)
       if(!(Num%j)) return 0;
    return 1;
}
