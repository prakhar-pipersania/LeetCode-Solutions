class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int max=0;
        vector<int> x(nums.size());
        for(int i=nums.size()-1;i>=0;i--)
        {
            for(int j=i+1;j<nums.size();j++)
                if(nums[j]>nums[i]&&x[j]>x[i])
                    x[i]=x[j];
            x[i]++;
        }
        for(auto e: x)
            if(e>max)
                max=e;
        return max;
    }
};
