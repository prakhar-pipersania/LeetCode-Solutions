void reverseString(char *s,int start,int end){
    int mid=(((end-start)/2)+start),j=end-1;
    for(int i=start;i<mid;i++)
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;
    }       
}
char * reverseStr(char * s, int k)
{  
    int start,end,sSize=strlen(s);
    if(k<2||sSize<2)
        return s;
    for(int i=0;i<sSize;)
    {
        start=i;
        end=i+k;
        if(i+k>sSize)
        {
            end=sSize;
            reverseString(s,start,end);
            break;
        }
        reverseString(s,start,end);
        i=end;
        i+=k;
        if(i>=sSize)
            break;
    }
    return s;
}
