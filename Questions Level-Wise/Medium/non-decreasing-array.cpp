class Solution {
public:
    bool checkPossibility(vector<int>& nums) 
    {
        int t=0,s=nums.size()-1;
        if(s<2)
            return 1;
        for(int i=0;i<s;i++)
        {
            t=nums[i]; 
            nums[i]=nums[i+1];
            if(is_sorted(nums.begin(),nums.end()))
                return 1;
            nums[i]=t;
        }
        nums[s]=nums[s-1]+1;
        if(is_sorted(nums.begin(),nums.end()))
                return 1;
        return 0;
    }
};