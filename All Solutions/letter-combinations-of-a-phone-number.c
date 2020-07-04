/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** letterCombinations(char * digits, int* returnSize)
{
    int j=0,v=1,div,val,e;
    if(digits[0]=='\0')
        v=0;
    while(digits[j]!='\0')
    {
        if(digits[j]=='7'||digits[j]=='9')
            v*=4;
        else if((digits[j]>='2'&&digits[j]<='6')||(digits[j]=='8'))
            v*=3;
        else
            v=0;
        j++;
    }
    val=v;
    *returnSize=v;
    char **c=(char**)calloc(sizeof(char*),v);
    for(int i=0;i<v;i++)
        c[i]=(char*)calloc(sizeof(char),j+1);
    j=0;
    while(digits[j]!='\0')
    {
        if(digits[j]=='7'||digits[j]=='9')
            div=4;
        else
            div=3;
        val/=div;
        e=-1;
        for(int i=0;i<v;)
        {
            e++;
            if(e>=div)
                e=0;
            for(int k=0;k<val;k++,i++)
            {
                switch(digits[j])
                {
                    case '2': c[i][j]='a'+e;break;
                    case '3': c[i][j]='d'+e;break;
                    case '4': c[i][j]='g'+e;break;
                    case '5': c[i][j]='j'+e;break;
                    case '6': c[i][j]='m'+e;break;
                    case '7': c[i][j]='p'+e;break;
                    case '8': c[i][j]='t'+e;break;
                    case '9': c[i][j]='w'+e;break;
                }
            }
        }
        j++;
    }
    for(int i=0;i<v;i++)
        c[i][j]='\0';
    return c;
}
