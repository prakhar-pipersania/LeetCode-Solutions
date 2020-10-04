class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) 
    {
        vector<int> res(intervals.size(),-1);
        map<int,int> x;
        for(int i=0;i<intervals.size();i++)
            x[intervals[i][0]]=i;
        for(int i=0;i<intervals.size();i++)
        {
            auto e=x.lower_bound(intervals[i][1]);
            if(e!=end(x))
                res[i]=e->second;
        }
        return res;
    }
};
