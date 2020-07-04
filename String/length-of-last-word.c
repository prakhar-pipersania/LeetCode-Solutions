int lengthOfLastWord(char * s)
{
    int i=0,c=0,j=0;
    while(s[i]!='\0')
        i++;
    if(i==0)
        return 0;
    i--;
    while(i>=0)
    {
        if(s[i]>=65&&s[i]<=122)
            c++;
        else if(c==0&&s[i]==32)
            j++;
        else
            break;
        i--;
    }
    if(c!=0)
        return c;
    return 0;
}
