class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) 
    {
        int c=0,size=in.size();
        sort(begin(in),end(in));
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size&&in[j][0]<=in[i][0];j++)
            {
                if(i!=j&&in[i][1]<=in[j][1])
                {
                    c++;break;
                }
            }
        }
        return (size-c);
    }
};
