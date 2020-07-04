int strStr(char * haystack, char * needle)
{
    int i=0,j=0,c,num,v;
    while(needle[i]!='\0')
        i++;
    if(i==0)
        return 0;
    v=i;
    i=0;
    while(haystack[i]!='\0')
        i++;
    if(i<v)
        return -1;
    i=0;
    while(haystack[i]!='\0')
    {
        if(haystack[i]==needle[j])
        {
            num=i;
            j=c=0;
            while(needle[j]!='\0'&&haystack[i]!='\0'&&needle[j]==haystack[i])
            {
                c++;i++;j++;
            }
            if(c==v)
                return num;
        i=num;
        num=j=0;
        }
        i++;
    }
    return -1;
}
