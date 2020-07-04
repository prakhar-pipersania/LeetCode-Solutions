int myAtoi(char * str)
{
    int flag=0,c=0,n=1,a[12];
    long num=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            if(flag==1)
                break;
        }
        else if(str[i]==45&&(str[i+1]>=48&&str[i+1]<=57))
        {
            if(flag==1)
                break;
            else
                n=-1;
        }
        else if(str[i]==43&&(str[i+1]>=48&&str[i+1]<=57))
        {
            if(flag==1)
                break;
            else
                n=1;
        }
        else if(str[i]>=48&&str[i]<=57)
        {
            flag=1;
            a[c++]=str[i]-48;
            if(a[0]==0)
                c=0;
            if(c==12)
            {
                if(n==1)
                    return INT_MAX;
                return INT_MIN;
            }
        }
        else
        {
            if(c==0)
                return 0;
            break;
        }
    }
    for(int i=0;i<c;i++)
        num=(num*10)+a[i];
    if(num>INT_MAX)
    {
        if(n==1)
            return INT_MAX;
        return INT_MIN; 
    }
    return (n*num);
}
