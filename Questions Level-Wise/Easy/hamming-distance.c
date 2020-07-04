int hammingDistance(int x, int y)
{
    int i,c=0,a[32],b[32];
    for(i=0;i<32;i++)
        a[i]=b[i]=0;
    for(i=31;x>0;i--,x/=2)
        a[i]=x%2;
    for(i=31;y>0;i--,y/=2)
        b[i]=y%2; 
    for(i=0;i<32;i++)
        if(a[i]!=b[i])
            c++;
    return c;
}
OR
int hammingDistance(int x, int y)
{
    int c=0;
    x=x^y;
    for(;x>0;x/=2)
        if(x%2==1)
            c++;
    return c;
}
