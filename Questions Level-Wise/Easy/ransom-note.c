bool canConstruct(char * ransomNote, char * magazine)
{
    int i,a[26],b[26];
    for(i=0;i<26;i++)
        a[i]=b[i]=0;
    for(i=0;ransomNote[i]!='\0';i++)
        a[ransomNote[i]-97]++;
    for(i=0;magazine[i]!='\0';i++)
        b[magazine[i]-97]++;
    for(i=0;i<26;i++)
        if(a[i]>b[i])
            return false;
    return true;
}
