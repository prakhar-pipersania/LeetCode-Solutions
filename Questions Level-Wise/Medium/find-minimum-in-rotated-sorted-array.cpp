class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int l=0,h=nums.size()-1;
        if(nums[l]<=nums[h])
            return nums[l];
        while(l<h)
        {
            int mid=(h-l)/2+l;
            if(nums[l]<=nums[h])
                return nums[l];
            else if(nums[l]<nums[mid])
                l=mid;
            else
                h=mid;
        }
        return nums[l+1];
    }
};
