int happy(int n)
{
    int c=0,i=0,sum=0,k=n;
    if(n==1)
        return 1;
    while(n!=0)
    {
        n/=10;
        c++;
    }
    int a[c];
    while(k!=0)
    {
        a[i]=(k%10)*(k%10);
        k/=10;
        i++;
    }
    for(i=0;i<c;i++)
        sum+=a[i];
    if(sum>1 && sum<7)
        return 0;
    int result = happy(sum); 
    if(result == 1 )
        return 1;
    return 0;
}
bool isHappy(int n)
{
    int k=n;
    if(k==0)
        return false;
    int h=happy(k);
    if(h==1)
        return true;
    return false;
}
