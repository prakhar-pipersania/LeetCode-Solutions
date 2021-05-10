class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int sum=0;
        for(int i=0;i<nums.size();i++) 
            sum+=nums[i];
        if(sum%2) 
            return false;
        sum/=2;
        map<short,short> x;
        unordered_set<short> t;
        x[0];
        for(int i=0;i<nums.size();i++)
        {
            for(auto e: x)
            {
                int val=e.first+nums[i];
                if(val<sum)
                    t.insert(val);
                else if(val==sum)
                    return true;
                else
                    break;
            }
            for(auto e: t)
                x[e];
            t.clear();
        }
        return false;
    }
};
