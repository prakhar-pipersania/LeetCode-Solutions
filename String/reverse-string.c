void reverseString(char* s, int sSize)
{
    int i,j=sSize-1;
    char temp;
    for(i=0;i<sSize/2;i++)
    {
       temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;
    }       
}
