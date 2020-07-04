char * toLowerCase(char * str)
{
    int i,j,k;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    }
    return str;
}
