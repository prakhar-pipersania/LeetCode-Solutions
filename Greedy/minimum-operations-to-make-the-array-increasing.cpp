class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        if(nums.size()==1)
            return 0;
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                int n=nums[i-1]+1;
                c+=n-nums[i];
                nums[i]=n;
            }
        }
        return c;
    }
};