class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        int x=0;
        sort(begin(points),end(points));
        for(int i=1;i<points.size();i++)
            if(points[i][0]-points[i-1][0]>x)
                x=points[i][0]-points[i-1][0];
        return x;
    }
};
