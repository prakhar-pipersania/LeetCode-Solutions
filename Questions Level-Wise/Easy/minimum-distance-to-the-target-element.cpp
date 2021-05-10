class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) 
    {
        int val=INT_MAX;
        if(nums[start]==target)
            return 0;
        for(int i=start-1;i>=0;i--)
            if(nums[i]==target)
                val=min(abs(i-start),val);
        for(int i=start+1;i<nums.size();i++)
            if(nums[i]==target)
                val=min(abs(i-start),val);
        return val;
    }
};