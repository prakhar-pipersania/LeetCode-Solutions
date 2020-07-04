class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int x=0,max=0;
        double val;
        for(int i=0;i<k;i++)
            max+=nums[i];
        val=(max*1.0)/k;
        for(int i=k;i<nums.size();i++)
        {
            max+=nums[i];
            max-=nums[x++];
            if(val<(max*1.0)/k)
                val=(max*1.0)/k;
        }
        return val;
    }
};
