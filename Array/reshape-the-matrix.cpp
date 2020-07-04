class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) 
    {
        int x=0;
        vector<vector<int>> a(r);
        if((nums.size()==0)||(nums.size()*nums[0].size()!=r*c)||(nums.size()==r&&nums[0].size()==c))
            return nums;
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<nums[0].size();j++)
            {
                a[x].push_back(nums[i][j]);
                if(a[x].size()==c)
                    x++;
            }
        return a;
    }
};
