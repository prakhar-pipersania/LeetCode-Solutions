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
                findsum(res,x,nums,i+1,sum,target);
            while(i+1<nums.size()&&nums[i]==nums[i+1])
                i++;
            x.pop_back(),sum-=nums[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> res;
        vector<int> x;
        sort(candidates.begin(),candidates.end());
        findsum(res,x,candidates,0,0,target);
        return res;
    }
};
