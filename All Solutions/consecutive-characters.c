int maxPower(char * s)
{
    if(strlen(s)==0)
        return 0;
    int c=0,v=0;
    for(int i=0;i<strlen(s)-1;i++)
    {
        if(s[i]==s[i+1])
            v++;
        else
        {
            if(v+1>c)
                c=v+1;
            v=0;
        }
    }
    if(v+1>c)
        c=v+1;
    return c;
}   
