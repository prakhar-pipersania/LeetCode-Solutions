bool hasAlternatingBits(int n)
{
    if(n==0)
        return true;
    int i=0,k=1,j=0;
    char a[32];
    while(n>0)
    {
        a[i++]='0'+n%2;
        n/=2;
    }
    a[i]='\0';
    while(k<i)
    {
        if(a[k]!=a[j])
        {
            j++;
            a[j]=a[k];
        }
    k++;
    }
    if(j+1!=i)
        return false;
    return true;
}
