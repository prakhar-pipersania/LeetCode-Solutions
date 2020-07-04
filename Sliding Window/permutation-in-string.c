bool checkInclusion(char * s1, char * s2)
{
    int *ap,*as,k=0,c,pSize=strlen(s1),sSize=strlen(s2),x=pSize;
    if(sSize<pSize)
        return false;
    as=(int*)calloc(sizeof(int),26);
    ap=(int*)calloc(sizeof(int),26);
    for(int i=0;i<pSize;i++)
        ap[s1[i]-97]++;
    for(int i=0;i<pSize;i++)
        as[s2[i]-97]++;
    for(int i=0;i<=sSize-pSize;i++)
    {
        c=0;
        for(int j=0;j<26;j++)
            if(as[j]==ap[j])
                c++;
        if(c==26)
            return true;
        as[s2[i]-97]--;
        if(x<sSize)
            as[s2[x++]-97]++;
    }
    return false;
}
