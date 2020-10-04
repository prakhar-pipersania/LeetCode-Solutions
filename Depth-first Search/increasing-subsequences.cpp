class Solution {
public:
    void gen(set<vector<int>> &x,vector<int> a,vector<int> nums,int index)
    {
        if(a.size()>=2)
            x.insert(a);
        for(int i=index;i<nums.size();i++)
            if(nums[i]>=a.back())
                a.push_back(nums[i]),gen(x,a,nums,i+1),a.pop_back();
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) 
    {
        vector<int> a;
        set<vector<int>> x;
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++)
            a.push_back(nums[i]),gen(x,a,nums,i+1),a.pop_back();
        res.reserve(x.size());
        for(auto e: x)
            res.push_back(e);
        return res;
    }
};
