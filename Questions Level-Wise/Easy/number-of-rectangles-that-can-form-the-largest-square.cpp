class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) 
    {
        int max,c=0,v=0;
        for(int i=0;i<rectangles.size();i++)
        {
            max=min(rectangles[i][0],rectangles[i][1]);
            if(max>v)
            {
                v=max;
                c=1;
            }
            else if(max==v)
            {
                c++;
            }
        }
        return c;
    }
};