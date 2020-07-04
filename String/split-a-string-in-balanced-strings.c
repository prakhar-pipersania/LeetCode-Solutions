int balancedStringSplit(char * s)
{
    int i=0,j=0,k=0,c=0;
    while(s[i]!='\0')
    {
        while(s[i]==s[i+1])
        {
            j++;
            i++;
        }
        i++;
        while(s[i]==s[i+1]&&k<j)
        {
            k++;
            i++;
        }
        i++;
        if(j==k)
        {
            c++;
            j=k=0;
        }
    }  
    if(j!=0||k!=0)
    c++;
    return c;
}
