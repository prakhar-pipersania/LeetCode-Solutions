class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) 
    {
        map<int,vector<int>> x;
        if(k==0)
            return false;
        if(t!=0)
        {
            for(int i=0;i<nums.size();i++)
                for(int j=i+1;j<=i+k&&j<nums.size();j++)
                    if(abs((long)nums[i]-nums[j])<=t)
                        return true;
        }
        else
        {
            for(int i=0;i<nums.size();i++)
                x[nums[i]].push_back(i);
            for(auto e: x)
                for(int i=0;i<e.second.size();i++)
                    for(int j=i+1;j<e.second.size();i++)
                        if(abs(e.second[i]-e.second[j])<=k)
                            return true;
        }
        return false;
    }
};
