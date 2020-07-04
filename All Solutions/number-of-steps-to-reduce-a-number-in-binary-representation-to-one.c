int zero(char *s,int len)
{
    int c=0;
    for(int i=0;i<=len;i++)
        if(s[i]=='0')
            c++;
    if(c==len&&s[len]=='1')
        return 1;
    else
        return 0;
}
int numSteps(char * s)
{
    int i,v,c=0,carry=0,len=strlen(s)-1;
    v=zero(s,len);
    if(v==1)
        return 0;
    while(1)
    {
        if(s[len]=='1')
        {
            carry=1;i=len;
            while(carry>0)
            {
                if(s[i]=='1')
                {
                    carry=1;
                    s[i--]='0';
                    if(i==-1)
                        return len+2;
                }
                else
                {
                    carry=0;
                    s[i--]='1';
                }  
            }
            c++;
        }
        v=zero(s,len);
        if(v==1)
            break;
        for(i=len;i>0;i--)
            s[i]=s[i-1];
        s[0]='0';
        c++;
        v=zero(s,len);
        if(v==1)
            break;
    }
    return c;
}
