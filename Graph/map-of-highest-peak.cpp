class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) 
    {
        int m;
        pair<int,int> c;
        queue<pair<int,int>> x;
        for(int i=0;i<isWater.size();i++)
        {
            for(int j=0;j<isWater[0].size();j++)
            {
                if(isWater[i][j])
                    x.push({i,j});
                isWater[i][j]=isWater[i][j]?0:INT_MAX;
            }
        }
        while(!x.empty())
        {
            c=x.front();
            if(c.first+1<isWater.size())
            {
                m=min(isWater[c.first+1][c.second],isWater[c.first][c.second]+1);
                if(isWater[c.first+1][c.second]>m)
                {
                    isWater[c.first+1][c.second]=m;
                    x.push({c.first+1,c.second});
                }
            }
            if(c.first-1>=0)
            {
                m=min(isWater[c.first-1][c.second],isWater[c.first][c.second]+1);
                if(isWater[c.first-1][c.second]>m)
                {
                    isWater[c.first-1][c.second]=m;
                    x.push({c.first-1,c.second});
                }
            }
            if(c.second+1<isWater[0].size())
            {
                m=min(isWater[c.first][c.second+1],isWater[c.first][c.second]+1);
                if(isWater[c.first][c.second+1]>m)
                {
                    isWater[c.first][c.second+1]=m;
                    x.push({c.first,c.second+1});
                }
            }
            if(c.second-1>=0)
            {
                m=min(isWater[c.first][c.second-1],isWater[c.first][c.second]+1);
                if(isWater[c.first][c.second-1]>m)
                {
                    isWater[c.first][c.second-1]=m;
                    x.push({c.first,c.second-1});
                }
            }
            x.pop();
        }
        return isWater;
    }
};