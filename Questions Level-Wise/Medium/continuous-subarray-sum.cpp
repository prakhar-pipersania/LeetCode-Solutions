class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        if(!k)
        {
            for(int i=1;i<nums.size();i++)
                if(nums[i]==0&&nums[i-1]==0)
                    return true;
        }
        else
        {
            for(int i=1;i<nums.size();i++)
            {
                nums[i]+=nums[i-1];
                if(!(nums[i]%k))
                    return true;   
            }
            for(int i=2;i<nums.size();i++)
                for(int j=0;j<i-1;j++)
                    if(!((nums[i]-nums[j])%k))
                        return true;
        }
        return false;
    }
};
