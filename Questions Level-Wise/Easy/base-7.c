char * convertToBase7(int num)
{
    if(num==0)
        return "0";
    int c=0;
    char *a;
    a=(char*)malloc(sizeof(char)*12);
    if(num<0)
    {
        a[0]='-';
        num*=-1;
    }
    for(int x=num;x>0;x/=7)
        c++;
    if(num>0&&a[0]!='-')
        c--;
    a[c+1]='\0';
    for(;num>0;num/=7)
        a[c--]='0'+num%7;
    return a;
}
