class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        sort(begin(nums),end(nums));
        int sum=0,mid=nums.size()/2;
        for(int i=0;i<nums.size();i++)
            sum+=abs(nums[mid]-nums[i]);
        return sum;
    }
};
