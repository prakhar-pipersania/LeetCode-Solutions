class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        sort(begin(nums),end(nums));
        return nums[nums.size()-k];
    }
};

//OR

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int c=0;
        map<int,int,greater<>> x;
        for(auto e: nums)
            x[e]++;
        for(auto e: x)
        {
            c+=e.second;
            if(c>=k)
                return e.first;
        }
        return nums[0];
    }
};
