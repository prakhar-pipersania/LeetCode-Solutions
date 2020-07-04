class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int i,x=0;
        vector<int> a(1,-1);
        for(i=0;i<nums.size();i++)
            if(nums[i]==0)
                a.push_back(i);
        a.push_back(i);
        if(a.size()<3)
            return nums.size()-1;
        for(int i=0;i<a.size()-2;i++)
            if(a[i+2]-a[i]>x)
                x=a[i+2]-a[i];
        return x-2;
    }
};
