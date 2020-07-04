/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize)
{
    int i,j=0,n,x,flag,*p;
    p=(int*)malloc(sizeof(int)*(right+left));
    for(i=left;i<right+1;i++)
    {
        n=left;flag=0;
        while(n>0)    
        {
            x=n%10;
            if(x==0||left%x!=0)
            {
                flag=1;break;
            }
            n/=10;
        }
        if(flag==0) 
            p[j++]=left;
        left++;    
    }
    *returnSize=j;
    return p;
}
