class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
        int in=-1,v=INT_MAX;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x||points[i][1]==y)
            {
                int z=abs(points[i][0]-x)+abs(points[i][1]-y);
                if(z<v)
                {
                    in=i;
                    v=z;
                }
            }
        }
        return in;
    }
};