char * sortString(char * s)
{
    int i,j,k=0,*a;
    a=(int*)calloc(sizeof(int),26);    
    for(i=0;s[i]!='\0';i++)
        a[s[i]-97]++;
    while(i!=0)
    {
        for(j=0;j<26;j++)
        {
            if(a[j]>0&&s[k]!='\0')
            {
                s[k++]='a'+j;
                a[j]--;
                i--;
            }
        }
        for(j=25;j>=0;j--)
        {
            if(a[j]>0&&s[k]!='\0')
            {
                s[k++]='a'+j;
                a[j]--;
                i--;
            }
        }
    }
    return s;
}
