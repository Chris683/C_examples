// Program: EG0611.c
// Description: µ›πÈ∑®º∆À„n!
int factorial(int n)
{
    if(n<0)
    {
        printf("n<0,input error");
        return -1;
    }
    if(n==0||n==1)
        return 1;
    return  factorial(n-1)*n;
}
