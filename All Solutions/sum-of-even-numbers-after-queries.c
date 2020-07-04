/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumEvenAfterQueries(int* A, int ASize, int** queries, int queriesSize, int* queriesColSize, int* returnSize)
{
    *returnSize=ASize;
    int i,j,k=0,*p,sum=0,old;
    p=(int*)calloc(sizeof(int),ASize);
    for(i=0;i<ASize;i++)
        if(A[i]%2==0)
            sum+=A[i];
    for(i=0;i<queriesSize;i++)
    {
        old=A[queries[i][1]];
        A[queries[i][1]]+=queries[i][0];
        if(A[queries[i][1]]%2==0)
        {
            if(old%2==0)
                p[k]=sum+A[queries[i][1]]-old;    
            else
                p[k]=sum+A[queries[i][1]];
        }
        else
        {
            if(old%2==0)
                p[k]=sum-old;    
            else
                p[k]=sum;
        }
        sum=p[k];
        k++;
    }
    return p;
}
