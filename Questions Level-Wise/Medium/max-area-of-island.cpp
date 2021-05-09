class Solution {
public:
    void findarea(vector<vector<int>>& grid,int r,int c,int &t)
    {
        grid[r][c]=0,t++;
        if(r+1<grid.size()&&grid[r+1][c])
            findarea(grid,r+1,c,t);
        if(r-1>=0&&grid[r-1][c])
            findarea(grid,r-1,c,t);
        if(c+1<grid[0].size()&&grid[r][c+1])
            findarea(grid,r,c+1,t);
        if(c-1>=0&&grid[r][c-1])
            findarea(grid,r,c-1,t);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int t,area=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j])
                {
                    t=0,findarea(grid,i,j,t);
                    if(t>area)
                        area=t;
                }
            }
        }
        return area;
    }
};