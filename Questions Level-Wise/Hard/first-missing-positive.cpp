class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n=100001;
        vector<int> x(n);
        for(int i=0;i<nums.size();i++)
            if(nums[i]>0&&nums[i]<n)
                x[nums[i]-1]++;
        for(int i=0;i<n;i++)
            if(x[i]==0)
                return i+1;
        return 1;
    }
};
