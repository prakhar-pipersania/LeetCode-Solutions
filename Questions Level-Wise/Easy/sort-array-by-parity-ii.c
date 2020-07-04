/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* A, int ASize, int* returnSize)
{
    *returnSize=ASize;
    int i,j=0,k=1,*p;
    p=(int*)malloc(sizeof(int)*(*returnSize));
    for(i=0;i<ASize;i++)
    {
        if(A[i]%2==0)
        {
            p[j]=A[i];j+=2;
        }
        else
        {
           p[k]=A[i];k+=2; 
        }
    }
    return p;
}
