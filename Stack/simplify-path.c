char * simplifyPath(char * path)
{
    if(strlen(path)==0)
        return "";
    int c,z,k=0,k2=0,flag,b[strlen(path)];
    char *a=(char*)calloc(sizeof(char),strlen(path)+1);
    a[k++]='/';
    for(int i=0;path[i]!='\0';i++)
    {
        if(path[i]!='/')
        {
            c=z=flag=0;
            while(path[i]!='/')
            {   
                if(flag==0)
                {
                    b[k2++]=k;
                    flag=1;
                }
                if(path[i]>='a'&&path[i]<='z')
                    z++;
                if(path[i]=='.')
                    c++;
                a[k++]=path[i];
                if(path[i+1]=='\0')
                    break;
                i++;
            }
            a[k++]='/';
            if(z>0)
                c=0;
            if(c==1)
            {
                if(k2-1>=0)
                {
                    k=b[k2-1];
                    k2--;
                }
                else
                {
                    k=1;
                    k2=0;
                }
            }
            if(c==2)
            {
                if(k2-2>=0)
                {
                    k=b[k2-2];
                    k2=k2-2;
                }
                else
                {
                    k=1;
                    k2=0;
                }
            }
        }
    }
    if(a[k-1]=='/'&&k-1!=0)
        a[k-1]='\0';
    else
        a[k]='\0';
    return a;
}
