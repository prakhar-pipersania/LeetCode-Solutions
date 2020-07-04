int maxVowels(char * s, int k)
{
    int c=0,j=0,v;
    for(int i=0;i<k;i++)
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            c++;
    v=c;
    for(int i=k;s[i]!='\0';i++,j++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            c++;
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            c--;
        if(c>v)
            v=c;
    }
    if(v>=k)
        return k;
    return v;
}
