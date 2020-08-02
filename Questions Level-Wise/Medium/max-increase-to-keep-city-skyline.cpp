class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        int count=0;
        vector<int> lr(grid.size()); 
        vector<int> tb(grid[0].size());
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]>lr[i])
                    lr[i]=grid[i][j];
                if(grid[i][j]>tb[j])
                    tb[j]=grid[i][j];
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(lr[i]>tb[j])
                    count+=tb[j]-grid[i][j];
                else
                    count+=lr[i]-grid[i][j];
            }
        }
        return count;
    }
};
