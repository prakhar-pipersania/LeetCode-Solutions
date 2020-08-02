class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> a;
        vector<int> x;
        a.push_back(x);
        for(int i=0;i<nums.size();i++)
            for(int j=0,size=a.size();j<size;j++)
                x=a[j],x.push_back(nums[i]),a.push_back(x);
        return a;
    }
};