int subtractProductAndSum(int n)
{
    int x,sum=0,pro=1;
    while(n>0)
    {
        x=n%10;
        sum+=x;
        pro*=x;
        n/=10;
    }
    return (pro-sum);
}
