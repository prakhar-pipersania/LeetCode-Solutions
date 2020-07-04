//Works till n=34
int tribonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    if(n>2)
    {
        n-=3;
        return (tribonacci(n)+tribonacci(n+1)+tribonacci(n+2));
    }
    return 0;
}


//Works till n=37
int tribonacci(int n)
{
    int x=0,y=1,z=1,s=0;
    if(n==0||n==1)
        return;
    if(n==2)
        return z;
    int c=2;
    while(n>c)
    {
        s=x+y+z;
        x=y;y=z;z=s;
        c++;
    }
    return z;
}
