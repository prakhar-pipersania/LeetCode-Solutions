int reverse(int x)
{
long int rev=0,n;
while(x!=0)
{
    n=x%10;
    rev=(rev*10)+n;
    x=x/10;
}
    if(rev>2147483648||rev<-2147483648)
    return 0;
    else
    return rev;
}