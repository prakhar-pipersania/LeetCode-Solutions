class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        vector<int> a(nums.size());
        for(auto e: nums)
            a[e-1]++;
        nums.resize(0);
        for(int i=0;i<a.size();i++)
            if(a[i]>1)
                nums.push_back(i+1);
        a.resize(0);
        return nums;
    }
};
