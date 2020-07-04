class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        int i,total=0,val=0,c=0;
        for(i=0;i<nums.size();i++)
            total+=nums[i];
        std::sort(nums.begin(),nums.end(),greater<int>());
        for(i=0;i<nums.size();i++)
        {
            val+=nums[i];c++;
            if(val>(total-val))
                break;
        }
        std::vector<int> a;
        a.resize(c);
        for(int i=0;i<c;i++)
            a[i]=nums[i];
        return a;
    }
};
