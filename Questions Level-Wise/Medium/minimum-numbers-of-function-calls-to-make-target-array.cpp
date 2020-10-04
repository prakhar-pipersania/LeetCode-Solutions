class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int c=0,f=0;
        while(1)
        {
            f=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]&1)
                    c++;
                nums[i]/=2;
                if(nums[i]==0)
                    f++;
            }
            if(f==nums.size())
                break;
            c++;
        }
        return c;
    }
};
