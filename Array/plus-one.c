/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void addone(int *a,int n,int key)
{
    if(a[key]<9)
        a[key]++;
    else
    {
        a[key]=0;
        addone(a,n,key-1);
    }
}
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int i,j,x=0,k,*p;
    for(i=0;i<digitsSize;i++)
        if(digits[i]==9)
            x++;
    if(x==digitsSize)
    {
        *returnSize=digitsSize+1;
        p=(int*)malloc(sizeof(int)*(*returnSize));
        p[0]=1;
        for(i=1;i<digitsSize+1;i++)
            p[i]=0;
    }
    else
    {
        *returnSize=digitsSize;
        p=(int*)malloc(sizeof(int)*(*returnSize));
        if(digits[digitsSize-1]<9)
                digits[digitsSize-1]++;
        else
            addone(digits,digitsSize,digitsSize-1);
        for(i=0;i<digitsSize;i++)
            p[i]=digits[i];
    }
    return p;    
}
