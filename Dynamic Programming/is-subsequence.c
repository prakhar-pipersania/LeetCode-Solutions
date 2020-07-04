bool isSubsequence(char * s, char * t)
{
    int i,j=0;
    if(strlen(t)<strlen(s))
        return false;
    for(i=0;t[i]!='\0';i++)
        if(t[i]==s[j])
            j++;
    if(j==strlen(s))
        return true;
    return false;
}
