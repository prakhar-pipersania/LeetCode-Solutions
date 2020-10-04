class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        vector<int> x(1002);
        for(int i=0;i<trips.size();i++)
            x[trips[i][1]]+=trips[i][0],x[trips[i][2]]-=trips[i][0];
        for(int i=0,sum=0;i<x.size();i++)
        {
            sum+=x[i],x[i]=sum;
            if(x[i]>capacity)
                return false;
        }
        return true;
    }
};
