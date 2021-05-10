class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) 
    {
        int wh=wall.size(),c=0;
        map<int,int> x;
        for(int i=0;i<wh;i++)
            for(int j=1;j<wall[i].size();j++)
                wall[i][j]+=wall[i][j-1],x[wall[i][j-1]]++;
        for(auto e: x)
            c=max(c,e.second);
        return (wh-c);
    }
};