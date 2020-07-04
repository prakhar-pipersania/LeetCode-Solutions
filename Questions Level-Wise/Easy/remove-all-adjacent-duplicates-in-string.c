char * removeDuplicates(char * S)
{
    int i,flag=1,k,c,Size=strlen(S);
    char *a=(char*)calloc(sizeof(char),Size+1);
    while(flag==1)
    {
        k=c=0;
        for(i=0;i<Size-1;i++)
        {
            while(S[i]==S[i+1]&&S[i+2]!='\0')
            {
                i+=2;
                c++;
            }
            if(S[i]!=S[i+1])
            {
                a[k++]=S[i];
                if(i==Size-2)
                    a[k++]=S[Size-1];
            }
        }
        a[k]='\0';
        for(i=0;i<k;i++)
            S[i]=a[i];
        S[i]='\0';
        Size=i;
        if(c==0||i<2)
            flag=0;
    }
    return a;
}
