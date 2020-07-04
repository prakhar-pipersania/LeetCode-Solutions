class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) 
    {
        if(grid.size()==0)
            return 0;
        int m=grid.size(),n=grid[0].size(),arr[m][n];
        arr[0][0]=grid[0][0];
        for(int i=1;i<m;i++)
            arr[i][0]=arr[i-1][0]+grid[i][0];
        for(int i=1;i<n;i++)
            arr[0][i]=arr[0][i-1]+grid[0][i];
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[i-1][j]<=arr[i][j-1])
                    arr[i][j]=arr[i-1][j]+grid[i][j];
                else
                    arr[i][j]=arr[i][j-1]+grid[i][j];
            }
        }
        return arr[m-1][n-1];
    }
};
