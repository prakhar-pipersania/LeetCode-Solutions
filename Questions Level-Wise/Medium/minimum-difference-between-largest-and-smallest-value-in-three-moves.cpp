class Solution {
public:
    int minDifference(vector<int>& nums) 
    {
        int n=nums.size(),min=INT_MAX;
        if(n<5)
            return 0;
        sort(begin(nums),end(nums));
        for(int i=0,j=n-4;i<4;i++,j++)
            if(nums[j]-nums[i]<min)
                min=nums[j]-nums[i];
        return min;
    }
};
