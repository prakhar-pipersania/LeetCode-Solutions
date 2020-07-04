char * reverseVowels(char * s)
{
    int i=0,j=0,k=0,l;
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            j++;
        i++;
    }
    int c=i;
    char a[i+1];
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            a[k]=s[i];
            k++;
        }
        i++;
    }
    for(l=0,i=c-1;i>=0;i--)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
           s[i]=a[l];
            l++;
        }
    }
    return s;
}

