// Program: EG0601.c               	    
// Description: �ж�һ�����Ƿ�Ϊ����. 
int IsPrime( int Num )
{
    int j, k=Num/2;
    for(j=2; j<=k; j++)
       if(!(Num%j)) return 0;
    return 1;
}
