int firstUniqChar(char * s)
{
    int i,a[26];
    for(i=0;i<26;i++)
        a[i]=0;
    for(i=0;s[i]!='\0';i++)
        a[s[i]-97]++;
    for(i=0;s[i]!='\0';i++)
        if(a[s[i]-97]==1)
            return i;
    return -1;
}
