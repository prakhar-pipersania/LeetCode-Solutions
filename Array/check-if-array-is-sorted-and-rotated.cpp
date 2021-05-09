class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int v;
        vector<int> c=nums;
        sort(begin(c),end(c));
        for(int i=0;i<nums.size();i++)
        {
            v=0;
            for(int j=i,k=0;k<nums.size();j++,k++)
                if(c[k]==nums[j%nums.size()])
                    v++;
            if(v==nums.size())
                return 1;
        }
        return 0;
    }
};