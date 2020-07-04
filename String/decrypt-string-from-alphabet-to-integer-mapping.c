char * freqAlphabets(char * s)
{
    int i,k=0,z;
    char *a;
    a=(char*)malloc(sizeof(char)*(strlen(s)+1));
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1'||s[i]=='2')
        {
            if(s[i+1]=='\0'||s[i+2]=='\0')
                a[k++]=s[i]+48;
            else if(s[i+2]=='#')
            {
                z=((s[i]-48)*10)+(s[i+1]-48);
                a[k++]='a'+(z-1);
                i+=2;
            }
            else
                a[k++]=s[i]+48;
        }
        else
            a[k++]=s[i]+48;
    }
    a[k]='\0';
    return a;
}
