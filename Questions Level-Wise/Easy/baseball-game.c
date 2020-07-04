int calPoints(char ** ops, int opsSize)
{
    int k=0,n=1,v=0,total=0,valid[5000];
    for(int i=0;i<opsSize;i++)
    {
        if(ops[i][0]=='-'||(ops[i][0]>=48&&ops[i][0]<=57))
        {
            n=1;v=0;
            for(int j=0;ops[i][j]!='\0';j++)
            {
                    if(ops[i][0]=='-')
                        n=-1;
                    if(ops[i][j]>=48&&ops[i][j]<=57)
                        v=(v*10)+(ops[i][j]-48);
            }
            v*=n;
            valid[k++]=v;
        }
        else
        {
            if(ops[i][0]=='+')
                valid[k++]=valid[k-1]+valid[k-2];
            else if(ops[i][0]=='C')
                k--;
            else if(ops[i][0]=='D')
                valid[k++]=2*valid[k-1];
        }
    }
    for(int i=0;i<k;i++)
        total+=valid[i];
    return total;
}
