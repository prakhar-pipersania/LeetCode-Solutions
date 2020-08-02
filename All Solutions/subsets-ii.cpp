class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        int size,start=0;
        vector<vector<int>> a(1);
        vector<int> x;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            size=a.size();
            for(int j=start;j<size;j++)
                x=a[j],x.push_back(nums[i]),a.push_back(x);
            start=0;
            if(i+1<nums.size()&&nums[i]==nums[i+1])
                start=size;
        }
        return a;   
    }
};
