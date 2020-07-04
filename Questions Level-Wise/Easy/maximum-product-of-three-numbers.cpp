class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int Size=nums.size();
        std::sort(nums.begin(),nums.end());
        if(nums[0]<0&&nums[1]<0&&(nums[0]*nums[1]>=nums[Size-2]*nums[Size-3]))
            return nums[Size-1]*nums[0]*nums[1];
        return nums[Size-1]*nums[Size-2]*nums[Size-3];    
    }
};
