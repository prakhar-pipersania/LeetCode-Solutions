int maxScore(char * s)
{
    int c,v=0,div=1,end=strlen(s);
    for(int i=1;i<end;i++)
    {
        c=0;
        for(int j=0;j<div;j++)
            if(s[j]=='0')
                c++;
        for(int j=div;j<end;j++)
            if(s[j]=='1')
                c++;
        div++;
        if(c>v)
            v=c;
    }
    return v;
}
