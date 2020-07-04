bool isPalindrome(char * s)
{
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57)
            s[j++]=s[i];
        i++;
    }
    s[j]='\0';i=0;
    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
        i++;
    }
    printf("%s",s);
    i=0,j--;
    while(s[i]!='\0')
    {
        if(s[i++]!=s[j--])
            return false;
    }
 return true;
}

