class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int flag=0,i=nums.size()-2;
        for(;i>=0;i--)
        {
            for(int j=nums.size()-1;j>i;j--)
            {
                if(nums[j]>nums[i])
                {
                    swap(nums[j],nums[i]);
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        reverse(begin(nums)+i+1,end(nums));
    }
};