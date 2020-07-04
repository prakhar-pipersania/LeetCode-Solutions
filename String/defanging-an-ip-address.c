#include<stdlib.h>
char * defangIPaddr(char * address)
{
    int i=0,j=0;
    char *str;
    while(address[i]!='\0')
        i++;
    str=(char*)malloc(sizeof(char)*(i+7));
    i=0;
    while(address[i]!='\0')
    {
        if(address[i]=='.')
        {
            str[j++]='[';
            str[j++]='.';
            str[j++]=']'; 
        }
        else
            str[j++]=address[i];
        i++;
    }
    str[j]='\0';
    return str;
}
