class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        vector<int> x(grid[0].size(),0);
        for(int i=0;i<x.size();i++)
        {
            int t=i;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][t]==1)
                {
                    if(t+1<grid[0].size()&&grid[j][t]==grid[j][t+1])
                        t++,x[i]=t;
                    else
                    {
                        x[i]=-1;
                        break;
                    }
                }
                else
                {
                    if(t-1>=0&&grid[j][t]==grid[j][t-1])
                        t--,x[i]=t;
                    else
                    {
                        x[i]=-1;
                        break;
                    }
                }
            }
            
        }
        return x;
    }
};
