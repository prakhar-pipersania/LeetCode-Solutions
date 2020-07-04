int trailingZeroes(int n)
{
    int i,v=12,a[13],sum=0;
    a[0]=5;
    if(n<5)
        return 0;
    for(i=0;i<12;i++)
        a[i+1]=5*a[i];
    for(i=0;i<13;i++)
        if(n<=a[i])
            v=i;
    for(i=v;i>=0;i--)
        sum+=n/a[i];
    return sum;
}
