char * longestCommonPrefix(char ** strs, int strsSize)
{
    int i,j,len=INT_MAX;
    if(strsSize==0)
        return "";
    for(i=0;i<strsSize;i++)
    {
    j=0;
    while (*(strs[i]+j)!='\0')
    j++;
    if(j<=len)
        len=j;
    }
    // To exist outer loop
    int flag =0;
    for(i=0;i<len;i++)
    {
        for(j=1;j<strsSize;j++)
        {
            if(strs[0][i]!=strs[j][i])
            {
                flag = 1;
                break;
            }
        }
        if(flag ==1)
            break;
    }
    if(i<1)
        return "";
    strs[0][i]='\0';
    return strs[0];
}
