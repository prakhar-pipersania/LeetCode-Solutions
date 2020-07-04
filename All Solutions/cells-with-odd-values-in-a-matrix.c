int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize)
{
    int i,j,k,l,matrix[n][m],sum=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            matrix[i][j]=0;
    for(k=0;k<indicesSize;k++)
    {
        for(j=0;j<m;j++)
            matrix[indices[k][0]][j]+=1;
        for(i=0;i<n;i++)
            matrix[i][indices[k][1]]+=1;
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(matrix[i][j]%2!=0)
                sum+=1;
    return sum;
}
