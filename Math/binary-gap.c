int binaryGap(int N)
{
    int v=0,start=0,end=0,flag=0,k=0,result=0,*a;
    a=(int*)calloc(sizeof(int),32);
    while(N>0)
    {
        a[k++]=N%2;
        N/=2;
    }
    for(int i=0;i<k;i++)
    {
        if(a[i]==1)
        {
            if(flag==0)
            {
                start=i;
                flag=1;
            }
            else
            {
                end=i;
            }
            if(end>start)
            {
                v=end-start;
                start=end;
                if(v>result)
                    result=v;
            }
        }
    }
    return result;
}
