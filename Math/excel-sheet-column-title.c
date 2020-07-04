char * convertToTitle(int n)
{
    char *a,temp;
    int i,j,x=0,k=0;
    a=(char*)malloc(sizeof(char)*8);
    while(n>0)
    {
        x=n%26;
        if(x==0)
            x=26;
        a[k++]='A'+(x-1);
        n-=x;
        n/=26;
    }
    a[k]='\0';
    j=k-1;
    for(i=0;i<k/2;i++)
    {
       temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }     
    return a;
}
