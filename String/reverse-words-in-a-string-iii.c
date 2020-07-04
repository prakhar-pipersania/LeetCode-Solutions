char * reverseWords(char * s)
{
    int i,j,k,m,v=0;
    char temp;
    for(k=0;s[k]!='\0';k++)
    {
        if(s[k]==32||s[k+1]=='\0')
        {
            j=k-1;
            if(s[k+1]=='\0')
                j++;
            m=v+(j-v)/2;
            for(i=v;i<m+1;i++)
            {
               temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                j--;
            } 
            v=k+1;
        }
    }
    return s;
}
