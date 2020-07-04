bool detectCapitalUse(char * word)
{
    int i=0,c=0,v=0;
    if(word[0]=='\0')
        return true;
    if(word[0]>=65&&word[0]<=90)
    {
        while(word[i]!='\0')
        {
            if(word[i]>=97&&word[i]<=122)
                c++;
            i++;
        }
        if(c==(i-1))
            return true;
    }
    i=c=0;
    if(word[0]>=65&&word[0]<=122)
    {   
        while(word[i]!='\0')
        {
            if(word[i]>=97&&word[i]<=122)
                c++;
            else if(word[i]>=65&&word[i]<=90)
                v++;
            i++;
        }
        if(c==i||v==i)
            return true;
    }
    return false;
}
