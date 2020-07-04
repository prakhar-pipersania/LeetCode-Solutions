char * reverseOnlyLetters(char * S)
{
    int i,j,c=0;
    if(strlen(S)==0)
        return;
    char a[strlen(S)+1],temp;
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]>=65&&S[i]<=90||S[i]>=97&&S[i]<=122)
            a[c++]=S[i];
    }
    a[c]='\0';
    j=c-1;
    for(i=0;i<c/2;i++)
    {
       temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }       
    for(i=0,c=0;S[i]!='\0';i++)
    {
        if(S[i]>=65&&S[i]<=90||S[i]>=97&&S[i]<=122)
            S[i]=a[c++];
    }
    return S;
}
