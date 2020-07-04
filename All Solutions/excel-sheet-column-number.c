int titleToNumber(char * s)
{
    int i,num=0;
    for(i=0;s[i]!='\0';i++)
        num=(26*num)+(s[i]-64);
    return num;
}
