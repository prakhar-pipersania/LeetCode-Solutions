class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) 
    {
        long sum=0;
        for(auto e: nums)
            sum+=e;
        sum=abs(goal-sum);
        if(sum%limit>0)
        {
            return (sum/limit)+1;
        }
        return (sum/limit);
    }
};
