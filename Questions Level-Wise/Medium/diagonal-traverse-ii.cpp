class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) 
    {
        int s=0;
        map<int,vector<int>> a;
        vector<int> x;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i].size();
            for(int j=0;j<nums[i].size();j++)
                a[i+j].push_back(nums[i][j]);
        }
        x.reserve(s);
        for(auto e: a)
        {
            reverse(begin(e.second),end(e.second));
            for(auto e1: e.second)
                x.push_back(e1);
        }
        return x;
    }
};
