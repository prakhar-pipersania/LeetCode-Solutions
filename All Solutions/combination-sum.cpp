class Solution {
public:
    void findsum(vector<vector<int>> &res,vector<int> x,vector<int> nums,int start,int sum,int target)
    {
        for(int i=start;i<nums.size();i++)
        {
            x.push_back(nums[i]),sum+=nums[i];
            if(sum==target)
                res.push_back(x);
            else if(sum<target)
                findsum(res,x,nums,i,sum,target);
            x.pop_back(),sum-=nums[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> res;
        vector<int> x;
        findsum(res,x,candidates,0,0,target);
        return res;
    }
};
