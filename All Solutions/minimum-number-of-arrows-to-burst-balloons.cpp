class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) 
    {
        int c=0,j,x,y;
        sort(begin(p),end(p));
        for(int i=0;i<p.size();i=j,c++)
            for(x=p[i][0],y=p[i][1],j=i+1;j<p.size()&&((x<=p[j][0]&&p[j][0]<=y)||(x<p[j][1]&&p[j][1]<=y));j++)
                x=max(x,p[j][0]),y=min(y,p[j][1]);
        return c;
    }
};
