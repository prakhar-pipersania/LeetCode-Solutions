/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
    int i,*p,k=0;
    *returnSize=ASize;
    p=(int*)malloc(sizeof(int)*(*returnSize));
    for(i=0;i<ASize;i++)
    {
        if(A[i]%2==0)
        {
            p[k]=A[i];
            k++;
        }
    }
    for(i=0;i<ASize;i++)
    {
        if(A[i]%2!=0)
        {
            p[k]=A[i];
            k++;
        }
    } 
    return p;
}
