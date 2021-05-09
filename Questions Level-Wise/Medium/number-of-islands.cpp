class Solution {
public:
    void remove(vector<vector<char>> &grid,int i,int j)
    {
        grid[i][j]='0';
        if(i+1<grid.size()&&grid[i+1][j]=='1')
            remove(grid,i+1,j);
        if(i-1>=0&&grid[i-1][j]=='1')
            remove(grid,i-1,j);
        if(j+1<grid[0].size()&&grid[i][j+1]=='1')
            remove(grid,i,j+1);
        if(j-1>=0&&grid[i][j-1]=='1')
            remove(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int c=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]-'0')
                    c++,remove(grid,i,j);
        return c;
    }
};
