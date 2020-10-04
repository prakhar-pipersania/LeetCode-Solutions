class Solution {
public:
    int deleteAndEarn(vector<int>& nums) 
    {
        vector<int> x(10001);
        for(auto e: nums)
            x[e]++;
        for(int i=0;i<x.size();i++)
            x[i]*=i;
        x[2]=max(x[2],x[1]);
        for(int i=3;i<x.size();i++)
            x[i]=max(x[i-1],x[i]+x[i-2]);
        return x[10000];
    }
};
