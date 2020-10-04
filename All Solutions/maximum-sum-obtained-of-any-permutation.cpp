class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests)
    {
        int i,sum=0;
        sort(nums.begin(),nums.end(),greater<>());
        vector<int> x(nums.size()+1);
        for(i=0;i<requests.size();i++)
            x[requests[i][0]]++,x[requests[i][1]+1]--;
        for(i=0;i<x.size();i++)
            sum+=x[i],x[i]=sum;
        sort(x.begin(),x.end(),greater<>());
        for(int i=0;x[i]>0;i++)
            sum+=(x[i]*nums[i])%1000000007,sum%=1000000007;
        return sum;
    }
};
