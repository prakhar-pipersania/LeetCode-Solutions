int findComplement(int num)
{
    if(num==0)
        return 1;
    int i,j,x,c=0;
    for(x=num;x>0;x/=2)
        c++;
    int a[c];
    i=c-1;
    for(;num>0;num/=2)
        a[i--]=num%2;
    for(i=0;i<c;i++)
    {
        if(a[i]==0)
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=c-1,j=0;i>=0;i--,j++)
        x+=a[i]*pow(2,j);
    return x;
}
