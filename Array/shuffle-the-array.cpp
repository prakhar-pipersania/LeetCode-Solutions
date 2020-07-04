class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> A;
        A.reserve(nums.size());
        for(int i=0;i<n;i++)
        {
            A.push_back(nums[i]);
            A.push_back(nums[i+n]);
        }
        return A;
    }
};
