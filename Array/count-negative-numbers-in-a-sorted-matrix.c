int countNegatives(int** grid, int gridSize, int* gridColSize)
{
    int i,j,x=0,y;
    y=*gridColSize;
    for(i=gridSize-1;i>=0;i--)
    {
        for(j=y-1;j>=0;j--)
        {
            if(grid[i][j]<0)
                x++;
            else
                break;
        }
    }
    return x;
}
