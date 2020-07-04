/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize)
{
    int *p,i,j;
    *returnSize=ASize;
    p=(int*)malloc(sizeof(int)*(*returnSize));
    for(i=0;i<ASize;i++)
        p[i]=A[i]*A[i];
    for(i=0;i<ASize;i++)
    {
        for(j=0;j<ASize-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    return p;
}