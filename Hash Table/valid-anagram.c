bool isAnagram(char * s, char * t)
{
    int i=0,j=0,a[26],b[26];
    for(i=0;i<26;i++)
        a[i]=b[i]=0;
    i=0;
    while(s[i]!='\0')
    {
        a[s[i]-97]++;
        i++;
    }
    while(t[j]!='\0')
    {
        b[t[j]-97]++;
        j++; 
    }
    if(i!=j)
        return false;
    for(i=0;i<26;i++)
    if(a[i]!=b[i])
            return false;
    return true;
}
