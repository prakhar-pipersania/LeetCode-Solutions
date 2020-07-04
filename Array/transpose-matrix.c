/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes)
{
    int i,j,m=* AColSize,n=ASize;
    int **a=(int**)malloc(sizeof(int*)*m);
    *returnColumnSizes=(int*)malloc(sizeof(int)*m);
    for(i=0;i<m;i++) 
    {
        a[i]=(int*)malloc(sizeof(int)*n);
        (*returnColumnSizes)[i]=n;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=A[j][i];
        }
    }
    *returnSize=m;
    return a;
}
