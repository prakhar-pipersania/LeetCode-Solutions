class Solution {
public:
    void spread(vector<vector<int>> grid,set<vector<int>> &a,int row,int col)
    {
        if(row-1>=0&&grid[row-1][col]==1)
            a.insert({row-1,col});
        if(row+1<grid.size()&&grid[row+1][col]==1)
            a.insert({row+1,col});
        if(col-1>=0&&grid[row][col-1]==1)
            a.insert({row,col-1});
        if(col+1<grid[0].size()&&grid[row][col+1]==1)
            a.insert({row,col+1});
    }
    int orangesRotting(vector<vector<int>>& grid) 
    {
        set<vector<int>> a;
        int temp,x[2]={0,0},c=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]>0)
                    x[grid[i][j]-1]++;
        if(x[0]==0)
            return c;
        if(x[0]>0&&x[1]==0)
            return -1;
        while(1)
        {
            temp=x[0];
            for(int i=0;i<grid.size();i++)
                for(int j=0;j<grid[i].size();j++)
                    if(grid[i][j]==2)
                        spread(grid,a,i,j);
            for(auto e: a)
                grid[e[0]][e[1]]=2;
            x[0]-=a.size(),x[1]+=a.size();
            a.clear();
            c++;
            if(x[0]==0)
                return c;
            if(x[0]==temp)
                return -1;
        }
        return 0;
    }
};
