int mul(char *num1,char *num2,int *a,int i)
{
    int j,k=0,z=0,c=0;
    for(j=strlen(num2)-1;j>=0;j--)
    {
        z=c+((num1[i]-48)*(num2[j]-48));
        if(z>9)
        {
            a[k++]=z%10;
            c=z/10;
        }
        else
        {
            a[k++]=z;
            c=0;
        }
    }
    if(c>0)
        a[k++]=c;
    return k;
}
int add(int *a,int *b,int k,int l)
{
    int j,z=0,c=0;
    for(j=0;j<k;j++)
    {
        z=c+b[j+l]+a[j];
        if(z>9)
        {
            b[j+l]=z%10;
            c=z/10;
        }
        else
        {
            b[j+l]=z;
            c=0;
        }
    }
    if(c>0)
    {
        b[j+l]=c;
        return j+l+1;
    }
    return j+l;
}
void rev(int *a,int k)
{
    int i,j=k-1,temp;
    for(i=0;i<k/2;i++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }  
}
char * multiply(char * num1, char * num2)
{
    int i,j,k,l=0,a[225],b[225];
    if(num2[0]=='0'||num1[0]=='0')
        return "0";
    char *c=(char*)calloc(sizeof(char),225);
    for(i=0;i<225;i++)
        a[i]=b[i]=0;
    for(i=strlen(num1)-1;i>=0;i--)
    {
        k=mul(num1,num2,a,i);
        j=add(a,b,k,l);
        l++;
    }
    rev(b,j); 
    for(i=0;i<j;i++)
        c[i]=b[i]+'0';
    c[i]='\0';
    return c;   
}
