class Solution {
public:
    void findpath(vector<vector<int>> &grid,int row,int col,int &c,int &non_obs)
    {
        if(grid[row][col]==2&&non_obs==0)
        {
            c++;
            return;
        }
        if(grid[row][col]==0&&non_obs>0)
        {
            if(row-1>=0)
            {
                grid[row][col]--,non_obs--;
                findpath(grid,row-1,col,c,non_obs);
                grid[row][col]++,non_obs++;
            }
            if(col-1>=0)
            {
                grid[row][col]--,non_obs--;
                findpath(grid,row,col-1,c,non_obs);
                grid[row][col]++,non_obs++;
            }
            if(row+1<grid.size())
            {
                grid[row][col]--,non_obs--;
                findpath(grid,row+1,col,c,non_obs);
                grid[row][col]++,non_obs++;
            }
            if(col+1<grid[0].size())
            {
                grid[row][col]--,non_obs--;
                findpath(grid,row,col+1,c,non_obs);
                grid[row][col]++,non_obs++;
            }
        }
    }
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        pair<int,int> start;
        int c=0,non_obs=1;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                    non_obs++;
                else if(grid[i][j]==1)
                    start={i,j},grid[i][j]--;
            }
        }
        findpath(grid,start.first,start.second,c,non_obs);
        return c;
    }
};
