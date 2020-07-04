char * toHex(int num)
{
    int k=8,c=0;
    unsigned int v;
    char *a;
    a=(char*)malloc(sizeof(char)*9);
    if(num==0)
        return "0";
    else if(num>0)
    {
        for(int x=num;x>0;x/=16)
            c++;
        a[c--]='\0';
        while(num>0)
        {
            if(num%16>9)
                a[c--]='a'+(num%16-10);
            else
                a[c--]='0'+num%16;
            num/=16;
        }
    }
    else
    {
        a[k--]='\0';
        v=4294967296+num;
        while(v>0)
        {
            if(v%16>9)
                a[k--]='a'+(v%16-10);
            else
                a[k--]='0'+v%16;
            v/=16;
        }
    }
    return a;
}
