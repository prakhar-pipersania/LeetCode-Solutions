#include<stdlib.h>
char * generateTheString(int n)
{
    int i;
    if(n==0||n==1)
        return "p"; 
    char *str = (char*)malloc((n+1)*sizeof(char));
    if(n%2==0)
    {
        str[0]='x';
        for(i=1;i<n;i++)
            str[i]='o';
    }
    else
    {
        for(i=0;i<n;i++)
            str[i]='o';
    }
    str[n]='\0';
    return str;
}
