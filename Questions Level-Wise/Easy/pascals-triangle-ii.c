/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize)
{
    int i,j,*a;
    *returnSize=rowIndex+1;
    a=(int*)malloc(sizeof(int)*(rowIndex+1));
    for(i=0;i<rowIndex+1;i++)
        a[i]=0;
    while(a[rowIndex]<1)
    {
        if(a[0]==0)
            a[0]=1;
        for(i=rowIndex;a[i]<=0;i--){}
        if(i+1<=rowIndex)
            a[i+1]=1;
        for(;i>0;i--)
            a[i]+=a[i-1];
    }
    return a;
}
