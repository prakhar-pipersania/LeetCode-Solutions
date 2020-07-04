/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers (int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
{
    int i,j,k=0,min,max,rowmin[matrixSize],colmax[*matrixColSize],*a;
    if(matrixSize<*matrixColSize)
        a=(int*)calloc(sizeof(int),matrixSize+1);
    else
        a=(int*)calloc(sizeof(int),*matrixColSize+1);
    for(i=0;i<matrixSize;i++)
    {
        min=INT_MAX;
        for(j=0;j<*matrixColSize;j++)
            if(matrix[i][j]<min)
                min=matrix[i][j];
        rowmin[k]=min;
        k++;
    }
    k=0;
    for(j=0;j<*matrixColSize;j++)
    {
        max=INT_MIN;
        for(i=0;i<matrixSize;i++)
             if(matrix[i][j]>max)
                max=matrix[i][j];
        colmax[k]=max;
        k++;
    }
    k=0;
    for(i=0;i<matrixSize;i++)
    {
        for(j=0;j<*matrixColSize;j++)
            if(rowmin[i]==colmax[j])
                a[k++]=rowmin[i];
    }
    *returnSize=k;
    return a;
}
