int arrangeCoins(int n)
{
    long i,sum=0;
    for(i=1;sum<n;i++)
        sum+=i;
    if(sum==n)
        return i-1;
    return i-2;
}
