int minSteps(char * s, char * t)
{
    int v=0,a[26],b[26];
    for(int i=0;i<26;i++)
        a[i]=b[i]=0;
    for(int i=0;s[i]!='\0';i++)
    {
        a[s[i]-97]++;
        b[t[i]-97]++;
    }
    for(int i=0;i<26;i++)
        if(a[i]-b[i]>0)
            v+=a[i]-b[i];
    return v;
}
