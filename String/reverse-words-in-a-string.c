char * reverseWords(char * s)
{
    int j,c=0,k=0,start,end,sSize=strlen(s);
    for(int i=0;i<sSize;i++)
        if(s[i]==' ')
            c++;
    if(sSize==0||c==sSize)
        return "";
    char temp,*a=(char*)calloc(sizeof(char),sSize+1);
    j=sSize-1;
    for(int i=0;i<sSize/2;i++)
    {
       temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;
    }  
    for(int i=0;i<sSize;)
    {
        if(s[i]!=' ')
        {
            start=i;
            while(s[i]!=' ')
            {
                i++;
                if(s[i]=='\0')
                    break;
            }
            end=i-1;
            for(int j=end;j>=start;j--)
                a[k++]=s[j];
            a[k++]=' ';
        }
        else
            i++;
    }
    a[k-1]='\0';
    return a;
}
