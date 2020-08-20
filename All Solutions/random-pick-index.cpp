class Solution {
public:
    unordered_map<int,vector<int>> a;
    Solution(vector<int>& nums) 
    {
        for(int i=0;i<nums.size();i++)
        {
            if(a[nums[i]].size()==0)
                a[nums[i]].push_back(1);
            a[nums[i]].push_back(i);
        }
    }
    int pick(int target) 
    {
        int val=a[target][a[target][0]];
        if((a[target][0]+1)!=a[target].size())
            a[target][0]++;
        else
            a[target][0]=1;
        return val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
 