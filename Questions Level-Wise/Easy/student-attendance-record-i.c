bool checkRecord(char * s)
{
    int i,c1=0,c2=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
        {
            c2=0;
            c1++;
            if(c1>1)
                return false;
        }
        else if(s[i]=='L')
        {
            c2++;
            if(c2>2)
                return false; 
        }
        else if(s[i]=='P')
        {
            c2=0;
        }
    }
    return true;
}
