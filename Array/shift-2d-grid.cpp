class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int m=grid.size(),n=grid[0].size(),temp;
        for(int l=0;l<(k%(m*n));l++)
        {
            temp=grid[0][0];
            for(int i=m-1;i>=0;i--)
                for(int j=n-1;j>=0;j--)
                    j+1==n?grid[(i+1)%m][(j+1)%n]=grid[i][j]:grid[i][j+1]=grid[i][j];
            n==1?grid[1][0]=temp:grid[0][1]=temp;
        }
        return grid;
    }
};
