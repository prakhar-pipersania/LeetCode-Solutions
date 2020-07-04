/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes)
{
    int i,j,k,temp,**a;
    *returnSize=ASize;
    a=(int**)calloc(sizeof(int*),ASize); 
    *returnColumnSizes=(int*)calloc(sizeof(int),ASize);
    for(i=0;i<ASize;i++) 
    {
        a[i]=(int*)calloc(sizeof(int),*AColSize);
        (*returnColumnSizes)[i]=*AColSize;
    }
    for(i=0;i<ASize;i++)
    {
        j=*AColSize-1;
        for(k=0;k<*AColSize/2;k++)
        {
            temp=A[i][k];
            A[i][k]=A[i][j];
            A[i][j]=temp;
            j--;
        }     
    }
    for(i=0;i<ASize;i++)
    {
        for(j=0;j<*AColSize;j++)
        {
            if(A[i][j]==1)
                a[i][j]=0;
            else
                a[i][j]=1;
        }
    }
    return a;
}
