int maximum69Number (int num)
{
    int i=0,j,k,n;
    n=num;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    n=num;
    int end=i,a[i];
    while(n>0)
    {
        a[i-1]=n%10;
        n/=10;
        i--;
    }
    for(i=0;i<end;i++)
    {
        if(a[i]==6)
        {
            a[i]=9;break;
        }
    }
    num=0;
    for(i=0;i<end;i++)
        num=(num*10)+a[i];
    return num;
}
