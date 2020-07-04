int climbStairs(int n)
{
    int i=2,x=1,y=2,s;
    if(n==1||n==2)
        return n;
    while(n>i)
    {
        s=x+y;
        x=y;
        y=s;
        i++;
    }
    return y;
}
