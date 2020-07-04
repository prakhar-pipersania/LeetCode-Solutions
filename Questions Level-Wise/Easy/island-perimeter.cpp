class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int peri=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]==1)
                {
                    if((j-1==-1)||(j-1>=0&&grid[i][j-1]==0))
                        peri++;
                    if((j+1==grid[i].size())||(j+1<grid[i].size()&&grid[i][j+1]==0))
                        peri++;
                    if((i-1==-1)||(i-1>=0&&grid[i-1][j]==0))
                        peri++;
                    if((i+1==grid.size())||(i+1<grid.size()&&grid[i+1][j]==0))
                        peri++;
                }
        return peri;
    }
};
