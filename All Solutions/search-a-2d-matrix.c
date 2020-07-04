bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    int start,mid,end;
    for(int i=0;i<matrixSize;i++)
    {
        start=0;end=*matrixColSize-1;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(target==matrix[i][mid])
                return true;
            else if(target<matrix[i][mid])
                end=mid-1;
            else
                start=mid+1;
        }
    }
    return false;
}
