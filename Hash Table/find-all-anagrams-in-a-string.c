/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findAnagrams(char * s, char * p, int* returnSize)
{
    int *a,*ap,*as,k=0,c,sSize=strlen(s),pSize=strlen(p),x=pSize;
    if(sSize<pSize)
    {
        *returnSize=0;
        return a;
    }
    as=(int*)calloc(sizeof(int),26);
    ap=(int*)calloc(sizeof(int),26);
    a=(int*)calloc(sizeof(int),sSize+1);
    for(int i=0;i<pSize;i++)
        ap[p[i]-97]++;
    for(int i=0;i<pSize;i++)
        as[s[i]-97]++;
    for(int i=0;i<=sSize-pSize;i++)
    {
        c=0;
        for(int j=0;j<26;j++)
            if(as[j]==ap[j])
                c++;
        if(c==26)
            a[k++]=i;
        as[s[i]-97]--;
        if(x<sSize)
            as[s[x++]-97]++;
    }
    *returnSize=k;
    return a;
}
