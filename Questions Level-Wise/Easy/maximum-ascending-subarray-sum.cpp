class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        int count=0,val=0;
        for(int i=0;i<nums.size();i++)
        {
            val=nums[i];
            for(int j=i+1;j<nums.size()&&nums[j]>nums[j-1];j++)
            {
                val+=nums[j];
            }
            count=max(count,val);
        }
        return count;
    }
};