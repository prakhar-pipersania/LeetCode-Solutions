class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        if(intervals.size()<2)
            return intervals;
        int s=0;
        sort(begin(intervals),end(intervals));
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=intervals[s][1])
                intervals[s][1]=max(intervals[i][1],intervals[s][1]);
            else
                s++,intervals[s]=intervals[i];
        }
        intervals.resize(s+1);
        return intervals;
    }
};
