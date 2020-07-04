int findNthDigit(int n)
{
    long num=9;
    int c=1,v=0,offset;
    if(n<=num)
        return n;
    while(n>num*c)
    {
        n-=num*c;
        v+=num;
        num*=10;
        c++;
    }
    offset=n%c;
    n/=c;
    n+=v;
    if(offset!=0)
    {
        n++;
        for(int i=0;i<c-offset;i++)
            n/=10;
    }
    return n%10;
}
